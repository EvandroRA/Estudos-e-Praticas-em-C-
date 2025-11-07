#include <stdio.h>
#include <stdlib.h>

/* 
 7. Implemente um programa que le tres valores e calcule a media ponderada para pesos 1, 2 e 3, respectivamente
 (multiplique cada nota pelo seu peso, some os produtos e divida o resultado pela soma dos pesos).
*/

float V1, V2, V3, Total;

int main(){
	
	printf("Insira o valor 1 \n");
	scanf("%f",&V1);
	
	printf("Insira o valor 2 \n");
	scanf("%f",&V2);
	
	printf("Insira o valor 3 \n");
	scanf("%f",&V3);
	
	Total = ((V1*1)+(V2*2)+(V3*3))/6;
	
	printf("\n");
	printf("A media ponderada e de %0.2f",Total);
	
	return 0;
}