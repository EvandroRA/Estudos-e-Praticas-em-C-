#include <stdio.h>
#include <stdlib.h>

/* 
 8. A prefeitura de Campos abriu uma linha de credito para os funcionarios estatutarios. O valor maximo da
 prestacao nao podera ultrapassar 30% do salario bruto. Fazer um programa que permita entrar com o salario
 bruto e o valor da prestacao, e informar se o emprestimo pode ou nao ser concedido.

*/

float Salario, Prestacao, Limite;

int main() {

    
    printf("Digite seu salario bruto \n");
    scanf("%f", &Salario);

    printf("Digite o valor da prestacao do emprestimo \n");
    scanf("%f", &Prestacao);
    
    Limite = Salario * 0.3;


    if (Prestacao <= Limite) {
    	
        printf("Emprestimo aprovado \n");
        
    } else {
    	
        printf("Emprestimo negado \n");
        
    }

    return 0;
}
