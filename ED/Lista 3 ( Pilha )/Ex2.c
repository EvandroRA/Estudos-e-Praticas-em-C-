#include <stdio.h>
#include <stdbool.h>

#define MAX 5

typedef struct {
    int elementos[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p) { p->topo = -1; }
bool isEmpty(Pilha p) { return p.topo == -1; }
bool isFull(Pilha p) { return p.topo == MAX - 1; }
void push(Pilha *p, int v) { if(!isFull(*p)) p->elementos[++(p->topo)] = v; }

// --- QUESTÃO 2 ---
void totalElementos(Pilha p) {
    if (isEmpty(p)) { // Requisito: usar isEmpty
        printf("Sinalizacao: A pilha nao tem nenhum elemento.\n");
    } 
    else if (isFull(p)) { // Requisito: usar isFull
        printf("Sinalizacao: A pilha esta totalmente preenchida.\n");
    } 
    else {
        // Apresenta o número de elementos presentes
        printf("Numero de elementos presentes atualmente: %d\n", p.topo + 1);
    }
}

int main() {
    Pilha p;
    inicializar(&p);
    
    printf("Teste Vazia: "); totalElementos(p);
    
    push(&p, 10); push(&p, 20);
    printf("Teste com 2 elementos: "); totalElementos(p);
    
    push(&p, 30); push(&p, 40); push(&p, 50);
    printf("Teste Cheia: "); totalElementos(p);
    
    return 0;
}