%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lexico.c"
#include "utils.c"
int contaVar;  //conta numero de variaveis
int contaVarGlobal;
int rotulo = 0; //marca lugares no codigo
int pos_funcao = 0;
int escopo = GLO;
int tipo;
%}

%token T_PROGRAMA
%token T_INICIO
%token T_FIM
%token T_LEIA
%token T_ESCREVA
%token T_SE
%token T_ENTAO
%token T_SENAO
%token T_FIMSE
%token T_ENQTO
%token T_FACA
%token T_FIMENQTO
%token T_INTEIRO
%token T_LOGICO
%token T_MAIS
%token T_MENOS
%token T_VEZES
%token T_DIV
%token T_ATRIBUI
%token T_MAIOR
%token T_MENOR
%token T_IGUAL
%token T_E
%token T_OU
%token T_NAO
%token T_ABRE
%token T_FECHA
%token T_V
%token T_F
%token T_IDENTIF
%token T_NUMERO
%token T_RETORNE
%token T_FUNC
%token T_FIMFUNC


%start programa

%left T_E T_OU
%left T_IGUAL
%left T_MAIOR T_MENOR
%left T_MAIS T_MENOS
%left T_VEZES T_DIV

%%

programa 
    : cabecalho 
        {
            pilha = malloc(sizeof(struct Pilha));
            pilha_func = malloc(sizeof(struct Pilha));
            pilha->topo = -1;
            pilha_func->topo = -1;
            contaVar = 0;
            escopo = GLO;    
        }
      variaveis 
        { 
            contaVarGlobal = desempilha(pilha);
            escopo = LOC;
        }
      //acrescentar as rotinas do slide:
      funcoes
        {
            escopo = GLO;
            mostraTabela();
        }
      T_INICIO lista_comandos T_FIM
        { 
            if (contaVarGlobal > 0)
               fprintf(yyout,"\tDMEM\t%d\n", contaVarGlobal); 
            fprintf(yyout, "\tFIMP\n");    
        }
    ;

cabecalho
    : T_PROGRAMA T_IDENTIF
        { fprintf(yyout,"\tINPP\n"); }
    ;

variaveis
    : { empilha(pilha, contaVar); }
    | { empilha(pilha, contaVar); }
    declaracao_variaveis
    {
        int var = contaVar - desempilha(pilha);
        if(var)
               fprintf(yyout,"\tAMEM\t%d\n", var); 
        empilha(pilha,var);
    }
    ;

declaracao_variaveis
    : tipo lista_variaveis declaracao_variaveis
    | tipo lista_variaveis
    ;

tipo
   : T_LOGICO
     { tipo = LOG; }
   | T_INTEIRO
    { tipo = INT;}
   ;

lista_variaveis
    : lista_variaveis  T_IDENTIF 
         { 
           strcpy(elemTab.id, atomo);
           elemTab.end = contaVar;
           elemTab.tip = tipo;
           elemTab.cat = VAR;
           elemTab.exc = escopo;
           elemTab.rot = rotulo;
           insereSimbolo(elemTab);
           contaVar++;
         }
    | T_IDENTIF
        { 
           strcpy(elemTab.id, atomo);
           elemTab.end = contaVar;
           elemTab.tip = tipo;
           elemTab.cat = VAR;
           elemTab.exc = escopo;
           elemTab.rot = rotulo;
           insereSimbolo(elemTab);
           contaVar++;      
        }
    ;
//regras para funcoes ("rotina" no slide)
funcoes
    :
    |   {
            fprintf(yyout,"\tDSVS\tL0\n"); 
            rotulo++;
        }
        declaracao_funcoes
        {
            fprintf(yyout,"L0\tNADA\t\n");
        }
    ;

declaracao_funcoes
    : funcao declaracao_funcoes
    | funcao
    ;

funcao
    : T_FUNC tipo T_IDENTIF {
        fprintf(yyout,"L%d\tENSP\n", rotulo);
        strcpy(elemTab.id, atomo);
        elemTab.end = contaVar;
        elemTab.tip = tipo;
        elemTab.cat = FUN;
        elemTab.exc = GLO;
        elemTab.rot = rotulo;
        insereSimbolo(elemTab);
        pos_funcao = contaVar;
        contaVar++;
    }
    T_ABRE parametros T_FECHA variaveis T_INICIO lista_comandos T_FIMFUNC
    {
        rotulo++;
    }
    ;

    parametros
    : /*vazio*/
    | parametro parametros
    ;

    parametro
    : tipo T_IDENTIF {
        strcpy(elemTab.id, atomo);
        elemTab.end = contaVar;
        elemTab.tip = tipo;
        elemTab.cat = PAR;
        elemTab.exc = LOC;
        elemTab.rot = rotulo;
        insereSimbolo(elemTab);
        tabSimb[pos_funcao].par[tabSimb[pos_funcao].npa] = tipo;
        tabSimb[pos_funcao].npa++;
        contaVar++;
    }
    ;

lista_comandos
    : /* vazia */
    | comando lista_comandos
    ;

comando
    : entrada_saida
    | repeticao
    | selecao
    | atribuicao
    | retorno
    ;

retorno
    : T_RETORNE expressao {
        if(escopo == GLO)
            yyerror("Comando retorne no código principal");
        int tipo = desempilha(pilha);
        if(tipo != tabSimb[pos_funcao].tip)
            yyerror("Incompatilidade de tipo");
        int npa = tabSimb[pos_funcao].npa;
        int varFuncao = contaVar - (pos_funcao + 1) - npa;
        fprintf(yyout,"\tARZL\t%d\n", -1 * (npa + 3)); 
        if(varFuncao > 0)
            fprintf(yyout,"\tDMEM\t%d\n", varFuncao); 
        fprintf(yyout,"\tRTSP\t%d\n", npa);
    }
    ;

entrada_saida
    : leitura
    | escrita
    ;

leitura
    : T_LEIA T_IDENTIF
        { 
            int pos = buscaSimbolo(atomo);
            fprintf(yyout,"\tLEIA\n\tARZG\t%d\n", tabSimb[pos].end); 
        }
    ;

escrita 
    : T_ESCREVA expressao
         { 
            desempilha(pilha);
            fprintf(yyout,"\tESCR\n"); 
         }
    ;

repeticao
    : T_ENQTO 
        { 
            fprintf(yyout,"L%d\tNADA\n", ++rotulo); 
            empilha(pilha, rotulo);
        }
      expressao T_FACA 
        {
             int tip = desempilha(pilha);
             if(tip != LOG)
                 yyerror("Incompatilidade de tipo");
             fprintf(yyout,"\tDSVF\tL%d\n", ++rotulo);
             empilha(pilha, rotulo);
        }
      lista_comandos 
      T_FIMENQTO
         { 
            int rot1 = desempilha(pilha);
            int rot2 = desempilha(pilha);
            fprintf(yyout,"\tDSVS\tL%d\n",rot2);
            fprintf(yyout,"L%d\tNADA\n",rot1);
         }
    ;

selecao
    : T_SE expressao T_ENTAO 
        {
             int tip = desempilha(pilha);
             if(tip != LOG)
                 yyerror("Imcompatilidade de tipo");
             fprintf(yyout,"\tDSVF\tL%d\n", ++rotulo);
             empilha(pilha, rotulo);
        }
      lista_comandos T_SENAO 
        { 
            int rot = desempilha(pilha);
            fprintf(yyout,"\tDSVS\tL%d\n", ++rotulo);
            fprintf(yyout,"L%d\tNADA\n", rot);
            empilha(pilha, rotulo);
        }
      lista_comandos T_FIMSE
        { 
            int rot = desempilha(pilha);
            fprintf(yyout,"L%d\tNADA\n", rot); 
        }
    ;

atribuicao
    : T_IDENTIF 
        {
            int pos = buscaSimbolo(atomo);
            empilha(pilha, pos);
        }   
      T_ATRIBUI expressao
        {
            int tip = desempilha(pilha);
            int pos = desempilha(pilha);
            if (tabSimb[pos].tip != tip)
               yyerror("Incompatibilidade de tipo!");
            if(tabSimb[pos].exc == GLO)
                fprintf(yyout,"\tARZG\t%d\n", tabSimb[pos].end);
            else {
                int pos_var = tabSimb[pos].end - tabSimb[pos_funcao].end - 1;
                int end = pos_var - tabSimb[pos_funcao].npa;
                if(tabSimb[pos].cat == PAR)
                    end-=2;
                fprintf(yyout,"\tARZL\t%d\n", end); 
            }
        }
    ;

expressao
    : expressao T_VEZES expressao
        {
            testaTipo(INT,INT, INT);
            fprintf(yyout,"\tMULT\n"); 
        }
    | expressao T_DIV expressao
        {
            testaTipo(INT,INT, INT);
            fprintf(yyout,"\tDIVI\n"); 
        }
    | expressao T_MAIS expressao
        {
            testaTipo(INT,INT, INT);
            fprintf(yyout,"\tSOMA\n"); 
        }
    | expressao T_MENOS expressao
        {
            testaTipo(INT,INT, INT);
            fprintf(yyout,"\tSUBT\n");
        }
    | expressao T_MAIOR expressao
        {
            testaTipo(INT,INT, LOG);
            fprintf(yyout,"\tCMMA\n"); 
        }
    | expressao T_MENOR expressao
        {
            testaTipo(INT,INT, LOG);
            fprintf(yyout,"\tCMME\n");
        }
    | expressao T_IGUAL expressao
        {
            testaTipo(INT,INT, LOG);
            fprintf(yyout,"\tCMIG\n"); 
        }
    | expressao T_E expressao 
        {
            testaTipo(LOG, LOG, LOG);
            fprintf(yyout,"\tCONJ\n"); 
        }
    | expressao T_OU expressao
        {
            testaTipo(LOG, LOG, LOG);
            fprintf(yyout,"\tDISJ\n"); 
        }
    | termo
    ;

// A FUNCAO É CHAMADA COMO UM TERMO DA FUNCAO
    //FUNCAO termo identificador chamada
    // se tiver ABRE e FECHA =  funcao
//-------------------------------------------------------------------------------------------------------------------------------------
chamada
    :
    | T_ABRE lista_argumentos 
    {
        int pos = desempilha(pilha_func);
        int npa = tabSimb[pos].npa;
        for(int i = npa - 1; i > 0; i--){
            int tipo = desempilha(pilha);
            if(tipo != tabSimb[pos].par[i])
                yyerror ("Incompatibilidade de tipo!");
        }
        fprintf(yyout,"\tSVCP\n");
        fprintf(yyout,"\tDSVS\tL%d\n",tabSimb[pos].rot);
    }
    T_FECHA
    ;

lista_argumentos
    :
    | expressao lista_argumentos
    ;

identificador
    : T_IDENTIF
        {
            int pos = buscaSimbolo(atomo);
            if(tabSimb[pos].cat == FUN)
            {
                empilha(pilha_func,pos);
                fprintf(yyout,"\tAMEM\t1\n");
            } 
            else
            {
                int exc = tabSimb[pos].exc;
                if(exc == GLO)
                    fprintf(yyout,"\tCRVG\t%d\n", tabSimb[pos].end); 
                else  {
                    int pos_param = tabSimb[pos].end - tabSimb[pos_funcao].end - 1;
                    int end = (pos_param - tabSimb[pos_funcao].npa);
                    if(tabSimb[pos].cat == PAR)
                        end -= 2;
                    fprintf(yyout,"\tCRVL\t%d\n", end);
                }
            }
            empilha(pilha, tabSimb[pos].tip);
        }  
    ;

termo
    : identificador chamada
    | T_NUMERO
        {
        fprintf(yyout,"\tCRCT\t%s\n", atomo);
        empilha(pilha, INT);
        }
    | T_V
        {
        fprintf(yyout,"\tCRCT\t1\n"); 
        empilha(pilha, LOG);
        }
    | T_F
        {
        fprintf(yyout,"\tCRCT\t0\n"); 
        empilha(pilha, LOG);
        }
    | T_NAO termo
        {
        int t = desempilha(pilha);
        if (t != LOG) yyerror ("Incompatibilidade de tipo!");
        fprintf(yyout,"\tNEGA\n"); 
        empilha(pilha, LOG);
        }
    | T_ABRE expressao T_FECHA
    ;
%%

int main(int argc, char *argv[]){
    char *p, nameIn[100], nameOut[100];
    argv++;
    if(argc < 2){
        puts("\nCompilador Simples\n");
        puts("\n\tUso: ./simples <NOME>[.simples]/n/n");
        exit(10);
    }
    p = strstr(argv[0], ".simples");
    if(p) *p = 0;
    strcpy(nameIn, argv[0]);
    strcat(nameIn, ".simples");
    strcpy(nameOut, argv[0]);
    strcat(nameOut, ".mvs");
    yyin = fopen(nameIn, "rt");
    if(!yyin){
        puts("Programa fonte não encontrado!");
        exit(20);
    }
    yyout = fopen(nameOut,"wt");
    yyparse(); /*LR melhorado*/
    puts("Programa ok!");
}