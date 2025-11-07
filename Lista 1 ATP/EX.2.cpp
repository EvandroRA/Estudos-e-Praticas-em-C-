#include <stdio.h>
#include <stdlib.h>

/* 
 2. Faca um programa que converta uma medida de metros para centmetros.
*/

float Metros, Centimetros;

int main(){
	
	printf("Bem vindo ao conversor de metros para centimetros! \n");
	printf("Insira o tamanho em metros para que possa ser feita a conversao! \n");
	scanf("%f",&Metros);
	
	Centimetros = Metros/100;
	
	printf(" %0.4f Metros equivalem a %0.4f Centimetros \n",Metros, Centimetros );
	
	return 0;
}
