simples:	lexico.l sintatico.y utils.c;
			flex -o lexico.c lexico.l;\
			bison -v -d sintatico.y -o sintatico.c;\
			gcc sintatico.c -o simples;

limpa: ;
			rm lexico.c sintatico.c sintatico.h sintatico.output simples

teste-todos: ;
			./simples testes_correcao/t1.simples;
			./simples testes_correcao/t2.simples;
			./simples testes_correcao/t3.simples;
			./simples testes_correcao/t4.simples;
			./simples testes_correcao/t5.simples;
			./simples testes_correcao/t6.simples;
			./simples testes_correcao/t7.simples;
			./simples testes_correcao/t8.simples;
			./simples testes_correcao/t9.simples;
			./simples testes_correcao/t10.simples;
			./simples testes_correcao/t11.simples;
			./simples testes_correcao/t12.simples;

teste: simples testes_correcao/t1.simples;
	make limpa;
	make;
	./simples testes_correcao/t1.simples;