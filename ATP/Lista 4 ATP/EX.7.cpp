#include <stdio.h>
#include <stdlib.h>

/* 7. Fa¸ca um programa que escreva todos os numeros m´ultiplos de 7 entre 1 e N, sendo N um valor introduzido
pelo usuario. Por exemplos: 7, 14, 21, 28, 35. (Utilizar a estrutura de repeticao for) */

int N;

int main() {

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Numeros multiplos de 7 entre 1 e %d:\n", N);
    
    for (int i = 7; i <= N; i += 7) {
        printf("%d ", i);
    }

    printf("\n");
    
    return 0;
}
