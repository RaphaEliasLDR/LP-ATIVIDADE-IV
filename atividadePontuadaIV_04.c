#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


struct conta_bancaria{
	char numero [200];
	char titular[200];
	float saldo;
	char tipo [200];
};


void menuDeOpcoes (){
printf ("\n======================================================");
printf ("\n 1 - SACAR DINHEIRO | 2- DEPOSITAR | 3- IMPRIMIR SALDO");
printf ("\n=======================================================");
}


int main(){
setlocale (LC_ALL, "portuguese");

int opcao;
float saque, depositar;

struct conta_bancaria conta;

printf ("\nInforme o número da conta: ");
gets(conta.numero);

printf ("\nInfomre o nome do titular: ");
gets(conta.titular);

printf ("\nInforme o saldo na conta: ");
scanf ("%f", &conta.saldo);
fflush (stdin);

printf ("\nInforme o tipo da conta (Poupança ou Corrente): ");
gets(conta.tipo);


menuDeOpcoes();

printf ("\nInforme a opção: ");
scanf ("%d", &opcao);


switch (opcao)
{
	case 1:
		printf ("\nQuanto deseja sacar? ");
		scanf ("%f", &saque);
		
		if (saque > conta.saldo){
			printf ("Saldo insuficiente :(");
		}else{
			conta.saldo = conta.saldo - saque;
			printf ("\nSaque REALIZADO! | Saldo atual: %f", conta.saldo);
		}
	break;
	
	case 2: 
		printf ("\nQuanto deseja depositar? ");
		scanf ("%f", &depositar);
		
	conta.saldo += depositar;
	printf ("\nDeposito REALIZADO! | Saldo atual: %f", conta.saldo);
	break;
	
	case 3: 
	printf ("\nSaldo atual: %f", conta.saldo);
	break;
	
	default: 
	printf ("Opção invalida!");		
}





return 0;
}

