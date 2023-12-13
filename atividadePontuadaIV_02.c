#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3




struct dados_aluno{
	char nome [200];
	char dataDeNasc [200];
	int notas [2];
	float media;
};


float calcularMedia (struct dados_aluno aluno[]){
	int i;
	int j;	
	
	for (i = 0; i < TAM; i++){
	
	printf ("\nNome do aluno(a): %s", aluno[i].nome);
	printf ("\nData de nascimento: %s", aluno[i].dataDeNasc);
	for (j = 0; j < 2; j++){
		printf ("\n%dº nota: %d", j+1, aluno[i].notas[j]);
	}
	printf ("\nMédia: %.2f", aluno[i].media);
}
}


int main (){
	setlocale (LC_ALL, "portuguese");
	int i;
	int j;
	int somaNotas = 0;
	
	
	struct dados_aluno aluno[TAM];
	
	for (i = 0; i < TAM; i++){
		printf ("\nNome do aluno(a): ");
		gets (aluno[i].nome);
		printf ("\nData de nascimento: ");
		gets(aluno[i].dataDeNasc);
		for (j = 0; j < 2; j++){
			printf ("\n%dº nota: ", j+1);
			scanf ("%d", aluno[i].notas[j]);
			somaNotas += aluno[i].notas[j];	
		}
		aluno[i].media += somaNotas / j; 
		fflush (stdin);
		somaNotas = 0;
	}


calcularMedia(aluno);

return 0;	
}
















