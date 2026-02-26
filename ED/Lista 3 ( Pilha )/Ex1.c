#include <stdio.h>
#include <stdbool.h>

#define MAX 10

typedef struct {
    int elementos[MAX];
    int topo;
} Pilha;

// Inicializa a pilha com topo em -1 (vazia)
void inicializar(Pilha *p) {
    p->topo = -1;
}

// Verifica se a pilha está vazia
bool isEmpty(Pilha p) {
    return p.topo == -1;
}

// Verifica se a pilha está cheia
bool isFull(Pilha p) {
    return p.topo == MAX - 1;
}

// Função para inserir elementos (Push)
void push(Pilha *p, int valor) {
    if (!isFull(*p)) {
        p->elementos[++(p->topo)] = valor;
    } else {
        printf("Erro: Pilha Cheia!\n");
    }
}

void exibirPilha(Pilha p) {
    
    if (isEmpty(p)) {
        printf("A pilha esta vazia. Nao ha elementos para exibir.\n");
        return;
    }

    printf("Exibindo Pilha (do topo para a base):\n");
    for (int i = p.topo; i >= 0; i--) {
        printf("| %d |\n", p.elementos[i]);
    }
    printf(" -----\n\n");
}

int main() {
    Pilha p1;
    inicializar(&p1);

    // Testando a função exibirPilha
    printf("--- Teste 1: Pilha Vazia ---\n");
    exibirPilha(p1);

    printf("--- Teste 2: Pilha com Elementos ---\n");
    // Simulando alguns valores da imagem da P1 (40, 30, 25, 10)
    push(&p1, 40);
    push(&p1, 30);
    push(&p1, 25);
    push(&p1, 10);

    exibirPilha(p1);

    return 0;
}