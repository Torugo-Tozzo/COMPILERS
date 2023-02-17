// Estrutura da Tabela de Simbolos
#include <ctype.h>
#define TAM_TAB 100
#define MAXPAR 20
enum
{
    INT,
    LOG
};
enum
{
    FUN,
    PAR,
    VAR
};
enum
{
    GLO,
    LOC
};

// #include <string.h>

struct elemTabSimbolos
{
    char id[100];    // identificador
    int end;         // endereço global ou var local
    int tip;         // tipo
    int cat;         // categorias: funcao('f'), parametro('p') ou variavel('v')
    int exc;         // escopo:  global('g'), local('l').
    int rot;         // rotulo (especifico para funcao)
    int npa;         // numero de árametros: (para a funcao)
    int par[MAXPAR]; // lista com os tipos de parametros; (para funcao)
} tabSimb[TAM_TAB], elemTab;

#define TAM_PIL 100
struct Pilha{
    int pilha[TAM_PIL];
    int topo;
}*pilha, *pilha_func;

int posTab = 0;

int desempilha(struct Pilha * p);
void empilha(struct Pilha * p, int valor);

void maiuscula(char *s)
{
    for (int i = 0; s[i]; i++)
        s[i] = toupper(s[i]);
}

int buscaSimbolo(char *id)
{
    int i;
    // maiuscula(id);
    for (i = posTab - 1; strcmp(tabSimb[i].id, id) && i >= 0; i--)
        ;

    if (i == -1)
    {
        char msg[100];
        sprintf(msg, "Identificador [%s] não encontrado!", id);
        yyerror(msg);
    }

    return i;
}

void insereSimbolo(struct elemTabSimbolos elem)
{
    int i;
    // maiuscula(elem.id);
    if (posTab == TAM_TAB)
        yyerror("Tabela de Simbolos Cheia!");

    /*
        Msm nome -> strcmp(tabSimb[i].id,elem.id)
            se for msm nome
        Verificar categoria -> elem.cat == PAR
            se for parametro
        Verificar escopo -> tabSimb[i].exc == elem.exc
            se for msm escopo -> erro
            se for diferente -> permite
    */
    i = posTab - 1;
    while (i >= 0)
    {
        if (!strcmp(tabSimb[i].id, elem.id) && elem.rot == tabSimb[i].rot)
                i = -1;
        i--;
    }

    //for (i = posTab - 1; strcmp(tabSimb[i].id, elem.id) && i >= 0; i--);
    // i = buscaSimbolo(elem.id);
    if (i != -1)
    {
        char msg[200];
        sprintf(msg, "Identificador [%s] duplicado!", elem.id);
        yyerror(msg);
    }
    

    tabSimb[posTab++] = elem;
}

// fazer
// desenvolver uma rotina p/ ajustar o endereco dos parametros
// na taela de simbolos e o vetor de parametros da funcao
// depois que for cadastrado o ultimo parametro

// modificar a rotina mostraTabela para apresentar os outros campos da tabela:
//  esc , rot , cat ,....
void mostraTabela()
{
    puts("Tabela de Simbolos");
    puts("------------------");
    printf("\n%30s | %s | %s | %s | %s | %s | %s \n", "ID", "END", "TIP", "CAT", "EXC", "ROT", "NPA");
    for (int i = 0; i < 50; i++)
        printf("-");
    for (int i = 0; i < posTab; i++)
        printf("\n%30s | %3d | %s | %s | %s | L%-3d | %d",
               tabSimb[i].id,
               tabSimb[i].end,
               tabSimb[i].tip == INT ? "INT" : "LOG",
               tabSimb[i].cat == VAR ? "VAR" : tabSimb[i].cat == PAR ? "PAR" : "FUN",
               tabSimb[i].exc == GLO ? "GLO" : "LOC",
               tabSimb[i].rot,
               tabSimb[i].npa);
    printf("\n");
}

// e f v palavras reservadas
// Estrutura da Pilha Semantica
//  usada para enderecos, variaveis, rotulos

void empilha(struct Pilha * p, int valor)
{   
    if (p->topo == TAM_PIL)
        yyerror("Pilha semântica cheia!");
    p->pilha[++p->topo] = valor;
}

int desempilha(struct Pilha * p)
{
    if (p->topo == -1)
        yyerror("Pilha semântica vazia!");
    return p->pilha[p->topo--];
}

void testaTipo(int tipo1, int tipo2, int ret)
{
    int t1 = desempilha(pilha);
    int t2 = desempilha(pilha);
    if (t1 != tipo1 || t2 != tipo2)
        yyerror("Incompatibilidade de tipo!");
    empilha(pilha, ret);
}
