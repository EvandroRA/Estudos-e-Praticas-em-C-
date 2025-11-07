#include <stdio.h>
#include <stdlib.h>

/*
1. Faca um programa para ler duas matrizes A e B, cada uma de duas dimens˜oes com 5 linhas e 3 colunas. Construir
uma matriz C de mesma dimens˜ao, onde C ´e formada pela soma dos elementos da matriz A com os elementos
da matriz B. 
*/



int main() {

    int A[5][3], B[5][3], C[5][3];
    
   
    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 3; j++) {
            printf("Digite A[%d][%d] e B[%d][%d]: ", i, j, i, j);
            scanf("%d %d", &A[i][j], &B[i][j]); // scanf duplo
            C[i][j] = A[i][j] + B[i][j];
        }

    }
    
    printf("\nMatriz C:\n");
    
    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 3; j++) {

            printf(" %d", C[i][j]);
        }

        printf("\n");
    }
    
    return 0;
}



