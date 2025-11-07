#include <stdio.h>
#include <stdlib.h>

/* 
 9. Leia o salario mensal atual de um funcionario e o percentual de reajuste. Calcular e escrever o valor do novo
 salario.
*/

float Salario, Reajuste, Opcao, Total;

int main(){
	
	printf("Qual e o seu salario atual? \n");
	scanf("%f",&Salario);
	
	printf("Digite o percentual de reajuste. Ex: 0.15 que seria equivalente a 15% \n");
	scanf("%f",&Reajuste);
	
	printf("Sera um acrescimo ou decrescimo? \n");
	printf("Caso a resposta seja Acrescimo digite (1), caso a resposta seja decrescimo digite (2) \n");
	scanf("%f",&Opcao);
	
	if (Opcao == 1) {
		
		Total = Salario + (Salario*Reajuste);
		
	}
	
	if (Opcao == 2) {
		
		Total = Salario - (Salario*Reajuste);
		
	}
	
	else {
		
		printf("Voce digitou um numero invalido");
		
	}
	
	printf("Seu novo salario sera de %0.2f",Total);
	
	
	return 0;
}