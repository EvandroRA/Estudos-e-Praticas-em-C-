#include <stdio.h>
#include <stdlib.h>

/* 
 8. Dado o peso e a altura do usuario imprima seu Indice de Massa Corporal. IMC = pesoaltura2
*/

float Altura, Peso, IMC;

int main(){
	
	printf("Insira o sue peso \n");
	scanf("%f",&Peso);
	
	printf("Insira a sua altura\n");
	scanf("%f",&Altura);
	
	IMC = ((Peso)/(Altura*Altura));
	
	printf("\n");
	printf("O IMC e de %0.2f",IMC);
	
	return 0;
}