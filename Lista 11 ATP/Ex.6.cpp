#include <stdio.h>
#include <stdlib.h>


/*
6. Faca uma funcao para receber um vetor de numeros inteiros e ordenar o vetor em ordem decrescente.Faca um
programa principal para testar a funcao e imprimir o resultado do processamento.
*/


void OrdenarDecrescente(int vetor[], int tamanho) {

    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] < vetor[j]) {
                // Troca os valores
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    
    int numeros[5];
    
    // Leitura dos números
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Chamada da função para ordenar
    OrdenarDecrescente(numeros, 5);

    // Imprime o vetor ordenado
    printf("Números em ordem decrescente:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
