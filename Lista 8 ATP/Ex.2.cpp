#include <stdio.h>
#include <stdlib.h>

/*
2. Fa¸ca um programa para ler dois vetores A e B com 7 elementos. Construir uma matriz C de duas dimens˜oes,
onde a primeira coluna dever´a ser formada pelos elementos do vetor A e a segunda pelos elementos do vetor B.
*/


int main() {

    int A[7], B[7], C[7][2];
    
    printf("Digite os 7 elementos do vetor A:\n");
    for (int i = 0; i < 7; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    printf("\nDigite os 7 elementos do vetor B:\n");
    for (int i = 0; i < 7; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }
    
    for (int i = 0; i < 7; i++) {
        C[i][0] = A[i];
        C[i][1] = B[i];
    }
    
    printf("\nMatriz C:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t%d\n", C[i][0], C[i][1]);
    }
    
    return 0;
}


