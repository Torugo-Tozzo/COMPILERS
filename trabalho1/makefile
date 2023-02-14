simples:	lexico.l sintatico.y utils.c;
			flex -o lexico.c lexico.l;\
			bison -v -d sintatico.y -o sintatico.c;\
			gcc sintatico.c -o simples;

limpa: ;
			rm lexico.c sintatico.c sintatico.h sintatico.output simples

teste: simples simples-exemplos/teste10.simples;
	make limpa;
	make;
	./simples simples-exemplos/teste10.simples;