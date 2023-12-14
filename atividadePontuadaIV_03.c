#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


struct loja_produto{
	char nome [200];
	float preco;
	int quantidadeEstoque;
};


void menuDeOpcoes (){
printf ("\n======================================================");
printf ("\n 1- REALIZAR COMPRA | 2- CONSULTAR ESTOQUE | 3- SAIR");
printf ("\n=======================================================");
}


int main(){
setlocale (LC_ALL, "portuguese");

int opcao;
int quantidade;


struct loja_produto produto;

printf ("\nInforme o nome do produto: ");
gets(produto.nome);

printf ("\nInfomre a quantidade em estoque: ");
scanf ("%d", &produto.quantidadeEstoque);

printf ("\nInforme o preço do produto: ");
scanf ("%f", &produto.preco);
fflush (stdin);

menuDeOpcoes();

printf ("\nInforme a opção: ");
scanf ("%d", &opcao);


switch (opcao)
{
	case 1:
		printf ("\nInforme a quantidade que deseja: ");
		scanf ("%d", &quantidade);
		if (quantidade > produto.quantidadeEstoque){
			printf ("Infelizmente o estoque deste produto é insuficiente...");
		}else{
			produto.quantidadeEstoque = produto.quantidadeEstoque - quantidade;
			printf ("\nCompra REALIZADA! | Em estoque: %d", produto.quantidadeEstoque);
		}
	break;
	
	case 2: 
		printf ("\nEm estoque: %d", produto.quantidadeEstoque);		
	break;
	
	case 3: 
	printf ("\nSaindo...");
	break;

	default: 
	printf ("Opção invalida!");		
}

return 0;
}

