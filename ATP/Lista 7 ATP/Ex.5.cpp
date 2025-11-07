#include <stdio.h>
#include <stdlib.h>

/*  5. Apos ler dois vetores de inteiros A e B de tamanho 20 cada um:
 (a) Armazenar em um terceiro vetor Soma , a soma dos elementos do vetor A com os do vetor B (respeitando
 as mesmas posicoes) e escrever os elementos deste
 (b) Escrever a quantidade de vezes que A e B possuem os mesmos numeros nas mesmas posicoes */

int main() {

    int A[20], B[20], Soma[20];
    int i, count = 0;

    
    printf("Digite 20 números para o vetor A:\n");
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº número para o vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Leitura dos 20 elementos do vetor B
    printf("Digite 20 números para o vetor B:\n");
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº número para o vetor B: ", i + 1);
        scanf("%d", &B[i]);
    }

    
    printf("\nVetor Soma (A + B):\n");
    for (i = 0; i < 20; i++) {
        Soma[i] = A[i] + B[i]; 
        printf("%d ", Soma[i]);
    }
    printf("\n");

    // Contando quantas vezes A e B possuem os mesmos números nas mesmas posições
    for (i = 0; i < 20; i++) {
        if (A[i] == B[i]) {
            count++; 
        }
    }

    printf("\nA quantidade de vezes que A e B possuem os mesmos números nas mesmas posições é: %d\n", count);

    return 0;
}
