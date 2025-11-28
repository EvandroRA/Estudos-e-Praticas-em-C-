#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* proximo;
};

void inserir_inicio(struct No** cabeca, int novo_valor) {
    

    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    
    novo_no->valor = novo_valor;

    novo_no->proximo = (*cabeca);

    (*cabeca) = novo_no;
}

// 3. Função para imprimir a lista
void imprimir_lista(struct No* no) {
    printf("Lista: ");
    while (no != NULL) {
        printf("%d -> ", no->valor);
        no = no->proximo; // Avança para o próximo nó
    }
    printf("NULL\n");
}

// 4. Função principal
int main() {
    // A lista começa vazia, logo a cabeça aponta para NULL
    struct No* cabeca = NULL;

    // Inserindo elementos
    inserir_inicio(&cabeca, 10);
    inserir_inicio(&cabeca, 20);
    inserir_inicio(&cabeca, 30);

    // A ordem será 30 -> 20 -> 10 -> NULL (pilha LIFO na inserção)
    imprimir_lista(cabeca);

    // 5. IMPORTANTE: Liberar a memória (Boa prática em C)
    struct No* atual = cabeca;
    struct No* temp;
    
    while (atual != NULL) {
        temp = atual;          // Guarda o atual
        atual = atual->proximo;// Avança para o próximo
        free(temp);            // Libera o antigo atual
    }

    return 0;
}