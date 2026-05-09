#include <stdio.h>
#include <stdbool.h>

#define MAX 20 // Aumentado para suportar A1 e A2

typedef struct {
    int elementos[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p) { p->topo = -1; }
bool isEmpty(Pilha p) { return p.topo == -1; }
bool isFull(Pilha p) { return p.topo == MAX - 1; }
void push(Pilha *p, int v) { if(!isFull(*p)) p->elementos[++(p->topo)] = v; }
int pop(Pilha *p) { return (!isEmpty(*p)) ? p->elementos[(p->topo)--] : -1; }

void exibirPilha(Pilha p) {
    if (isEmpty(p)) { printf("Vazia"); return; }
    for (int i = p.topo; i >= 0; i--) printf("[%d] ", p.elementos[i]);
}

int main() {
    Pilha P1, P2, P3, A1, A2;
    // 1. Inicializa todas [cite: 22]
    inicializar(&P1); inicializar(&P2); inicializar(&P3); inicializar(&A1); inicializar(&A2);

    // 2. Carrega P1, P2 e P3 conforme imagem [cite: 23]
    int p1_init[] = {40, 30, 25, 10}; for(int i=0; i<4; i++) push(&P1, p1_init[i]);
    int p2_init[] = {34, 60, 28, 15}; for(int i=0; i<4; i++) push(&P2, p2_init[i]);
    int p3_init[] = {20, 35};         for(int i=0; i<2; i++) push(&P3, p3_init[i]);

    // 3, 4, 5. Transfere de P1 e P2 para A1 ate ficarem vazias [cite: 24, 25, 26]
    while (!isEmpty(P1) || !isEmpty(P2)) {
        if (!isEmpty(P1)) push(&A1, pop(&P1));
        if (!isEmpty(P2)) push(&A1, pop(&P2));
    }

    // 6. P3 para A1 ate P3 ficar vazia [cite: 27]
    while (!isEmpty(P3)) push(&A1, pop(&P3));

    // 7. A1 para A2 ate A1 ficar vazia [cite: 28]
    while (!isEmpty(A1)) push(&A2, pop(&A1));

    // 8. Remove de A2 e exibe 4 vezes [cite: 29]
    printf("Passo 8 - Removendo 4 de A2: ");
    for(int i=0; i<4; i++) printf("%d ", pop(&A2));
    printf("\n\n");

    // 9. Exibir todas as pilhas [cite: 30]
    printf("P1: "); exibirPilha(P1); printf("\n");
    printf("P2: "); exibirPilha(P2); printf("\n");
    printf("P3: "); exibirPilha(P3); printf("\n");
    printf("A1: "); exibirPilha(A1); printf("\n");
    printf("A2: "); exibirPilha(A2); printf("\n");

    return 0;
}