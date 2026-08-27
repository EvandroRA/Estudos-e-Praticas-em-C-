#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para preencher o vetor com números de 1 a 100
void preencherVetor(int v[50]) {
    for (int i = 0; i < 50; i++) {
        v[i] = (rand() % 100) + 1;
    }
}

// Função RECURSIVA para encontrar o maior valor
int buscarMaior(int v[50], int indice) {
    // Caso base: chegamos ao último elemento
    if (indice == 49) {
        return v[indice];
    }

    // Chamada recursiva para pegar o maior do restante do vetor
    int maiorDoResto = buscarMaior(v, indice + 1);

    // Compara o elemento atual com o maior que veio lá da frente
    if (v[indice] > maiorDoResto) {
        return v[indice];
    } else {
        return maiorDoResto;
    }
}

int main() {
    int vetor[50];
    int maior;

    srand(time(NULL)); // Semente para números aleatórios

    preencherVetor(vetor);

    // Imprime o vetor para conferência (opcional, mas bom para testar)
    printf("Vetor gerado:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chama a função começando do índice 0
    maior = buscarMaior(vetor, 0);

    printf("\nO maior valor encontrado no vetor e: %d\n", maior);

    return 0;
}