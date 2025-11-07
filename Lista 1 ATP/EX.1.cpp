#include <stdio.h>
#include <stdlib.h>

/* 
 1. Leia um valor de temperatura em graus Celsius e converta-o em graus Fahrenheit e Kelvin. As formulas de
 conversao sao:
 F =(9C+160)/5
 K =C+273
*/

float Celcius, Fahrenheit, Kelvin;

int main(){
	
	printf("Bem vindo ao conversor de temperatura! \n");
	printf("Insira a Temperatura para que possa ocorrer a conversao! \n");
	scanf("%f",&Celcius);
	
	Fahrenheit = (9*Celcius+160)/5;
	Kelvin = Celcius + 273;
	
	printf("A temperatura de %0.2f Celcius e igual a %0.2f Fahrenheit \n",Celcius,Fahrenheit );
	printf("A temperatura de %0.2f Celcius e igual a %0.2f Kelvin \n",Celcius,Kelvin );
	
	return 0;
}
