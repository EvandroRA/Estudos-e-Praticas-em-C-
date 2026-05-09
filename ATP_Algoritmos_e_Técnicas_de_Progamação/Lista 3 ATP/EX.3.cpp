#include<stdio.h>
#include<stdlib.h>

/* 
3. Dado o salário fixo, o valor das vendas efetuadas pelo vendedor de uma empresa e sabendose que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 e 5% sobre
o que ultrapassar este valor, calcular e escrever o seu salário total.
*/

float Salario,Salario2,Vendas;

int main(){
	
	printf("Digite o seu salario fixo \n");
	scanf("%f",&Salario);
	
	printf("Qual e o total de vendas? \n");
	scanf("%f",&Vendas);
	
	if (Vendas <= 1500 ) {
		
		Salario = Salario + (Vendas*0.03);
		
	}
	if (Vendas > 1500) {
		
		Salario = Salario + (1500*0.03);
		Salario = Salario + ((Vendas - 1500)*0.05);
		
	}
	
	printf("\n");
	printf("O seu salario total e de %0.2f",Salario);
	
	
return 0;

}






















