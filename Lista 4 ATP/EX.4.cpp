#include <stdio.h>
#include <stdlib.h>

// 4. Prepare um programa para calcular a soma dos numeros entre 1 e N inclusive. O valor de N deve ser perguntado no inicio do programa. (Utilizar a estrutura de repeticao for)


int soma = 0, N;

int main() {
	
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        soma += i;
    }
    
    printf("A soma total dos numeros de 1 a %d e: %d\n", N, soma);
    
    return 0;
}
