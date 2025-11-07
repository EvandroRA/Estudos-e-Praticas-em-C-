#include <stdio.h>
#include <stdlib.h>

/* 
 3. Faca um Programa que peca o comprimento a largura e a altura de uma caixa dagua retangular. Calcule e
 informe o volume da caixa.
*/

float Comprimento, Largura, Altura, Volume;

int main(){
	
	printf("Bem vindo a Calculadora de Volume de Retangulos!\n");
	
	printf("Insira a medida do Comprimento! \n");
	scanf("%f",&Comprimento);
	printf("Insira a medida do Largura! \n");
	scanf("%f",&Largura);
	printf("Insira a medida do Altura! \n");
	scanf("%f",&Altura);
	
	Volume = (Comprimento*Largura*Altura);
	
	printf("O Volume do retangulo e de %0.2f unidades de volume",Volume);
	
	
	return 0;
}
