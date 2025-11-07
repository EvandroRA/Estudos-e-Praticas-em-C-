#include <stdio.h>
#include <stdlib.h>

/* 
 5. Prepare um algoritmo para calcular o espaco percorrido por um movel em movimento retilneo uniforme dada a
 seguinte formula:
 S = So+V T. Inicialmente o algoritmo devera perguntar ao usuario os valores do espaco inicial(So), da
 velocidade(V ) e do tempo(T). Apos a entrada dos devidos valores estes devem ser substitudos na formula,
 resultando assim no espaco percorrido(S) que devera ser informado na tela do usuario
*/

float S0,V,T,S;

int main(){
	
	printf("Bem vindo a calculadora de espaco vetorial! \n");
	
	printf("Insira o valor do Espaco Inicial\n");
	scanf("%f",&S0);

	printf("Insira o valor da Velocidade \n");
	scanf("%f",&V);
	
	printf("Insira o valor do Tempo \n");
	scanf("%f",&T);
	
	S = S0 + (V*T);
	
	printf("O espaco percorrido e de %0.2f",S);
	
	return 0;
}
