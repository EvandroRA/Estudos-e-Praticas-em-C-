#include <stdio.h>
#include <stdlib.h>

/* 
 4. Faca um algoritmo para ler os valores para as variaveis A e B, e efetuar a troca dos valores de forma que,
 a variavel A passe a possuir o valor da variavel B e que a variavel B passe a possuir o valor da variavel A.
 Apresentar os valores trocados.
*/

float A,B,C,D;

int main(){
	
	printf("Bem vindo ao Progama Troca de Valores! \n");
	printf("Insira o valor de A \n");
	scanf("%f",&A);
	
	printf("Insira o valor de B \n");
	scanf("%f",&B);
	
	C = A;
	D = B;
	
	B = C;
	A = D;
	
	printf("O valor de A e %0.2f \n",A);
	printf("O valor de B e %0.2f \n",B);
	
	
	return 0;
}