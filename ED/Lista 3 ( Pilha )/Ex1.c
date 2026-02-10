#include <stdio.h>
#include <stdbool.h>

#define TAM 10 // Tamanho máximo da pilha

typedef struct {
    int itens[TAM];
    int topo;
} Pilha;

// Função auxiliar para verificar se está vazia
bool isEmpty(Pilha *p) {
    return p->topo == -1;
}


void exibirPilha(Pilha p) {
    
    if (isEmpty(&p)) {
        printf("A pilha esta vazia!\n");
        return;
    }

    printf("Exibindo a Pilha (do topo para a base):\n");
    
    // Percorre do topo até a base (índice 0) [cite: 2]
    for (int i = p.topo; i >= 0; i--) {
        printf("[%d]\n", p.itens[i]);
    }
    printf("--- Fim da Pilha ---\n");
}