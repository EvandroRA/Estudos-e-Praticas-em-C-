#include <stdio.h>
#include <stdlib.h>

// 1. Prepare um programa para perguntar 10 numeros e informar a soma total destes numeros.(Utilizar a estrutura de repeticao for)

int numero, soma = 0;

int main() {
	
    
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        soma += numero;
    }
    
    printf("A soma total dos numeros e: %d\n", soma);
    
    return 0;
}
