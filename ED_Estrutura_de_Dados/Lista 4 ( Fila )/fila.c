#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

Fila* criarFila() {
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;
    f->tamanho = 0;
    return f;
}

int isFull(Fila *fila) {
    return fila->tamanho >= 5; // Limite do enunciado [cite: 14, 15]
}

int isEmpty(Fila *fila) {
    return fila->inicio == NULL;
}

int inserirCliente(Fila *fila, char *nome) {
    if (isFull(fila)) return 0;
    
    Nodo *novo = (Nodo*)malloc(sizeof(Nodo));
    strcpy(novo->cliente.nome, nome);
    novo->prox = NULL;
    
    if (isEmpty(fila)) {
        fila->inicio = novo;
    } else {
        fila->fim->prox = novo;
    }
    fila->fim = novo;
    fila->tamanho++;
    return 1;
}

int removerCliente(Fila *fila, Cliente *c) {
    if (isEmpty(fila)) return 0;
    
    Nodo *temp = fila->inicio;
    *c = temp->cliente;
    fila->inicio = temp->prox;
    
    if (fila->inicio == NULL) fila->fim = NULL;
    
    free(temp);
    fila->tamanho--;
    return 1;
}