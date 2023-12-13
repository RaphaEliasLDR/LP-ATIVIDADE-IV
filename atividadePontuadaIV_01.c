#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_contato{
	char nome [200];
	char numero [200];
	char email [200];
};


	void pesquisarContato (struct dados_contato contato[], char* nomeContato){
	int i;
	
	for (i =0; i < 3; i++){
	if (strcmp (contato[i].nome, nomeContato)==0){
		printf ("\nNome: %s", contato[i].nome);
		printf ("\nNúmero telefone: %s", contato[i].numero);
		return;
	}
	}
		printf ("CONTATO NÃO EXISTE!");
}
		

int main(){
	int i;
	char nomeContato[200];
	setlocale (LC_ALL, "portuguese");
	
	
	struct dados_contato contato[3];
	
	for (i = 0; i < 3; i++){
		printf ("\nInforme um nome: ");
		gets (contato[i].nome);
		
		printf ("\nInforme um número: ");
		gets (contato[i].numero);
		
		printf ("\nInforme um E-mail: ");
		gets (contato[i].email);
		
	}


	printf ("\n\nInforme o nome do contato: ");
	gets (nomeContato);


	pesquisarContato (contato, nomeContato);
	
	return 0;
}
