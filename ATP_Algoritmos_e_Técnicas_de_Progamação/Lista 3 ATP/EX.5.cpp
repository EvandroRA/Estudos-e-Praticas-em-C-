#include<stdio.h>
#include<stdlib.h>

/* 
5. Tendo como dados de entrada a altura o sexo e o peso de uma pessoa, construa um algoritmo
que calcule seu peso ideal, utilizando as seguintes fórmulas:
• Para homens: (72.7*h) - 58
• Para mulheres: (62.1*h) - 44.7 (h = altura)
Informe se o peso da pessoa está dentro, acima ou abaixo do peso (Considere a margem de
erro de 1 Kg para mais ou para menos como estando no peso ideal).
*/

float Altura,Sexo,Peso,PesoIdeal;

int main(){
	
	printf(" Digite sua altura \n");
	scanf("%f",&Altura);
	
	printf(" Digite o seu peso \n");
	scanf("%f",&Peso);
	
	printf(" Digite  o seu sexo, (1) para homem e (2) para mulher \n");
	scanf("%f",&Sexo);
	
	
	if (Peso > (PesoIdeal-1) && Peso < (PesoIdeal + 1)){
		
		printf("Voce esta dentro do peso ideal");
		
	}

	else if (Peso > (PesoIdeal+1)){
		
		printf("Voce esta acima do peso!");
		
	}
	else {
		
		printf("Voce esta abaixo do peso!");
		
	}
	

return 0;

}
