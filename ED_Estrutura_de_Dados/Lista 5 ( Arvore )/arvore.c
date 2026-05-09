#include <stdio.h>
#include <stdlib.h>

typedef int elemento;

struct NO {
   elemento dado;
   struct NO *esq;
   struct NO *dir;
};

typedef struct NO ARV;

ARV *inserir(ARV *T, elemento x);
ARV *buscar(ARV *T, elemento x);
ARV *maior_recursivo(ARV *T);
int contar_nos(ARV *T);

void EmOrdem(ARV *T);
void PreOrdem(ARV *T);
void PosOrdem(ARV *T);

int main() {
    ARV *Raiz = NULL;

    Raiz = inserir(Raiz, 23);
    Raiz = inserir(Raiz, 10);
    Raiz = inserir(Raiz, 5);
    Raiz = inserir(Raiz, 15);
    Raiz = inserir(Raiz, 77);
    Raiz = inserir(Raiz, 65);

    printf("--- PERCURSOS ---\n");
    printf("PRE ORDEM: "); PreOrdem(Raiz); printf("\n");
    printf("POS ORDEM: "); PosOrdem(Raiz); printf("\n");

    printf("\n--- BUSCAS ---\n");
    if (buscar(Raiz, 77)) printf("Numero 77 encontrado.\n");
    else printf("Numero 77 nao encontrado.\n");

    if (buscar(Raiz, 80)) printf("Numero 80 encontrado.\n");
    else printf("Numero 80 nao encontrado.\n");

    printf("\n--- ESTATISTICAS DA ARVORE ---\n");
 
// ================================================================================================================================== //

    ARV *maior = maior_recursivo(Raiz);
    if (maior) printf("Maior valor encontrado: %d\n", maior->dado);
    
    int total = contar_nos(Raiz);
    printf("Total de nos na arvore: %d\n", total);

    return 0;
}

// ================================================ Funçoes de Manipulação da Árvore ================================================ //

ARV *maior_recursivo(ARV *T) {
    if (T == NULL) return NULL;
    if (T->dir == NULL) return T; 
    return maior_recursivo(T->dir);
}

int contar_nos(ARV *T) {
    if (T == NULL) return 0;
    return 1 + contar_nos(T->esq) + contar_nos(T->dir);
}

// ================================================================================================================================== //

ARV *inserir(ARV *T, elemento x) {
    if (T == NULL) {
        ARV *novo = (ARV*) malloc(sizeof(ARV));
        novo->dado = x;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }
    if (x < T->dado) T->esq = inserir(T->esq, x);
    else T->dir = inserir(T->dir, x);
    return T;
}

ARV *buscar(ARV *T, elemento x) {
    if (T == NULL) return NULL;
    if (x == T->dado) return T;
    if (x < T->dado) return buscar(T->esq, x);
    return buscar(T->dir, x);
}

void EmOrdem(ARV *T) {
    if (T != NULL) {
        EmOrdem(T->esq);
        printf("%d ", T->dado);
        EmOrdem(T->dir);
    }
}

void PreOrdem(ARV *T) {
    if (T != NULL) {
        printf("%d ", T->dado);
        PreOrdem(T->esq);
        PreOrdem(T->dir);
    }
}

void PosOrdem(ARV *T) {
    if (T != NULL) {
        PosOrdem(T->esq);
        PosOrdem(T->dir);
        printf("%d ", T->dado);
    }
}