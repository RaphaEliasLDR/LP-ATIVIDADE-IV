#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



float calcularMedia (struct dados_aluno *aluno, notas[][2]){
	int i, j;
	float media; 
	float somarNotas;
	float media;
	
	for (j = 0; j < 2; j++){
			printf ("\n%dº nota: ", j+1);
			scanf ("%f", &aluno[i].notas[j]);
			somarNotas += aluno[i].notas[j];
		}
		
	media = somarNotas / j;
	
	return media;
}

struct dados_aluno{
	char nome [200];
	char dataDeNasc [200];
	int notas [2];
};


int main (){
	setlocale (LC_ALL, "portuguese");
	
	int i;
	int j;
	int somaNotas;
	
	
	struct dados_aluno aluno[5];
	
		printf ("\nNome do aluno(a): ");
		gets (aluno[i].nome);
		printf ("\nData de nascimento: ");
		gets(aluno[i].dataDeNasc);
	
	calcularMedia (aluno);


return 0;	
}

