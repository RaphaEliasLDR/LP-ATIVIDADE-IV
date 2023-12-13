#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 5


struct dados_aluno{
	char nome [200];
	char dataDeNasc [200];
	int notas [TAM][2];
	float media;
};


void mostrarMedia (struct dados_aluno aluno[]){
	int i;	
	
	for (i = 0; i < TAM; i++){
		printf ("\nNome do aluno(a): %s", aluno[i].nome);
		printf ("\nMédia: %.2f", aluno[i].media);
	}	
}

/*
void resultadoAprovacao (struct dados_aluno aluno[], char* resultadoDoAluno){
	int i;
	
	for (i = 0; i < TAM; i++){
		if (strcmp (aluno[i].nome, resultadoDoAluno)==0){
		printf ("\nNome: %s", aluno[i].nome);
		return;
	}
	if (aluno[i].media >= 7){
				printf ("Resultado: APROVADO!!");
			}else {
				printf ("Resultado: REPROVADO!!");
			}
	}
	
}
*/

int main (){
	setlocale (LC_ALL, "portuguese");
	
	int i;
	int j;
	int somaNotas;
	char resultadoDoAluno;
	
	struct dados_aluno aluno[TAM];
	
	for (i = 0; i < TAM; i++){
		
		printf ("\nNome do aluno(a): ");
		gets (aluno[i].nome);
		printf ("\nData de nascimento: ");
		gets(aluno[i].dataDeNasc);
		
		for (j = 0; j < 2; j++){
			printf ("\n%dº nota: ", j+1);
			scanf ("%f", &aluno[i].notas[j]);
			somaNotas += aluno[i].notas[j];
		}
		
		aluno[i].media = somaNotas / j;
		somaNotas = 0;
		fflush(stdin);
	}
	
	
	mostrarMedia(aluno);

return 0;	
}
