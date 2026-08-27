/*  1) Considere as seguintes chaves {63, 33, 94, 47, 82, 80, 53, 61}. Construa um Heap de Máximo seguindo os
algoritmos estudados em sala. Apresente cada árvore resultante de alguma alteração. Lembre-se que o
processo é iniciado no algoritmo arranjar.  */


#include <stdio.h>

void imprimirArray(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void maxHeapify(int arr[], int n, int i) {
    
    int maior = i;          // Inicializa o maior como a raiz
    int esquerda = 2 * i + 1; // Índice do filho da esquerda
    int direita = 2 * i + 2;  // Índice do filho da direita

    // Se o filho da esquerda for maior que a raiz
    if (esquerda < n && arr[esquerda] > arr[maior])
        maior = esquerda;

    // Se o filho da direita for maior que o maior até agora
    if (direita < n && arr[direita] > arr[maior])
        maior = direita;

    // Se o maior não for a raiz, faz a troca e continua a afundar
    if (maior != i) {
        int temp = arr[i];
        arr[i] = arr[maior];
        arr[maior] = temp;

        // Imprime o estado após a troca
        printf("Troca realizada ( %d <-> %d ): ", arr[maior], arr[i]);
        imprimirArray(arr, n);

        // Chama recursivamente no sub-arvore afetada
        maxHeapify(arr, n, maior);
    }
}

// Função para construir o Max Heap
void buildMaxHeap(int arr[], int n) {
    // Começa do último nó interno (n/2 - 1) e vai até a raiz (0)
    for (int i = n / 2 - 1; i >= 0; i--) {
        printf("\nAnalisando indice %d (valor %d)\n", i, arr[i]);
        maxHeapify(arr, n, i);
    }
}

int main() {
    int arr[] = {63, 33, 94, 47, 82, 80, 53, 61};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    imprimirArray(arr, n);

    buildMaxHeap(arr, n);

    printf("\nMax Heap final: ");
    imprimirArray(arr, n);

    return 0;
}