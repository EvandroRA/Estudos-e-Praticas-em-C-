#include <stdio.h>
#include <stdlib.h>

/* 
 6.Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.
*/

float Numero, Antecessor, Sucessor;

int main(){
	
	printf("Bem vindo ao progama antecessor e sucessor! \n");
	
	printf("Insira o numero que voce deseja ver o seu antecessor e sucessor respectivamente \n");
	scanf("%f",&Numero);
	
	Antecessor = Numero - 1;
	Sucessor = Numero + 1;
	
	printf("Seu antecessor e %0.2f \n",Antecessor);
	printf("Seu sucessor e %0.2f \n",Sucessor);
	
	return 0;
}