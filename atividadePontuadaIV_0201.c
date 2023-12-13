#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



void calcularMedia (struct dados_aluno *aluno){
	int i;
	
	printf ("Média: %.2f", aluno[i].media);
}

struct dados_aluno{
	char nome [200];
	char dataDeNasc [200];
	int notas [2];
	float media;
};


int main (){
	setlocale (LC_ALL, "portuguese");
	
	int i;
	int j;
	int somaNotas;
	
	
	struct dados_aluno aluno;
	
	
		printf ("\nNome do aluno(a): ");
		gets (aluno.nome);
		printf ("\nData de nascimento: ");
		gets(aluno.dataDeNasc);
		for (j = 0; j < 2; j++){
			printf ("\n%dº nota: ", j+1);
			scanf ("%f", &aluno.notas[j]);
			somaNotas += aluno.notas[j];
		}
		
		aluno.media = somaNotas / j(float);
		somaNotas = 0;
		fflush(stdin);
	
		printf ("Média: %.2f", aluno.media);
	


return 0;	
}

