#include <stdio.h>  
#include <stdlib.h> 

struct No {
    int valor;
    struct No *proximo;
};

int busca(struct No* lista, int num) {
    struct No* atual = lista;
    while (atual != NULL) {
        if (atual->valor == num) {
            return 1; 
        }
        atual = atual->proximo;
    }
    return 0; 
}

void INSERIR(struct No** lista, int num) {
   
    if (busca(*lista, num)) {
        printf("Erro: O numero %d ja existe na lista.\n", num);
        return;
    }

    struct No* novoNo = (struct No*) malloc(sizeof(struct No)); 
    
    if (novoNo == NULL) {
        printf("Erro de memoria!\n");
        return;
    }

    novoNo->valor = num;
    novoNo->proximo = *lista;
    
    *lista = novoNo;
    
    printf("Numero %d inserido com sucesso.\n", num);
}

int main() {
    struct No* lista = NULL; 

    INSERIR(&lista, 10);
    INSERIR(&lista, 20);
    INSERIR(&lista, 10);
    INSERIR(&lista, 30);
    INSERIR(&lista, 31);
    INSERIR(&lista, 37);
    INSERIR(&lista, 33);
    INSERIR(&lista, 120);

    return 0;
}