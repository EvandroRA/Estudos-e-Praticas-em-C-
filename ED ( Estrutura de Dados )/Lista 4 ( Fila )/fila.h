#ifndef FILA_H
#define FILA_H

typedef struct Cliente {
    char nome[50];
} Cliente;

typedef struct Nodo {
    Cliente cliente;
    struct Nodo *prox;
} Nodo;

typedef struct Fila {
    Nodo *inicio;
    Nodo *fim;
    int tamanho; // Facilita o controle do isFull
} Fila;

Fila* criarFila();
int inserirCliente(Fila *fila, char *nome);
int removerCliente(Fila *fila, Cliente *c);
int isFull(Fila *fila);
int isEmpty(Fila *fila);

#endif