#include <stdio.h>
#include <stdlib.h>

/* 4. Faca um programa que leia 20 elementos de um vetor A e construa um vetor B com os mesmos elementos de A,
 sendo que estes deverao estar invertidos, ou seja, o primeiro elemento de A passa a ser o ultimo de B, o segundo
 de A passa a ser o penultimo de B e assim por diante.*/

int main() {

    int A[20], B[20]; 
    int i;

    
    printf("Digite 20 números para o vetor A:\n");
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &A[i]);
    }

    
    for (i = 0; i < 20; i++) {
        B[i] = A[19 - i]; 
    }

    
    printf("\nVetor B com os elementos invertidos de A:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");

    return 0;
}
