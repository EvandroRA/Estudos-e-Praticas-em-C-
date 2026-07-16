#include <stdio.h>
#include <stdlib.h>

#define M 100 

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void subir(int i, int L[]) {
    int j = (i - 1) / 2; 
    
    if (j >= 0) { 
        if (L[i] > L[j]) { 
            troca(&L[i], &L[j]);
            subir(j, L); 
        }
    }
}


void descer(int i, int n, int L[]) {
    int j = 2 * i + 1; 
    
    if (j < n) { 
        
        if (j + 1 < n && L[j + 1] > L[j]) {
            j = j + 1;
        }
        
        
        if (L[j] > L[i]) {
            troca(&L[i], &L[j]);
            descer(j, n, L); 
        }
    }
}


void inserir(int novo, int *n, int L[]) {
    if (*n < M) {
        L[*n] = novo;   
        subir(*n, L);   
        (*n) = (*n) + 1; 
    } else {
        printf("Erro: Overflow. O Heap esta cheio.\n");
    }
}


int remover(int *n, int L[]) {
    if (*n != 0) {
        int removido = L[0]; 
        L[0] = L[*n - 1];    
        (*n) = (*n) - 1;     
        descer(0, *n, L);    
        return removido;
    } else {
        printf("Erro: Underflow. O Heap esta vazio.\n");
        return -1; 
    }
}

void arranjar(int n, int L[]) {
    
    for (int i = (n / 2) - 1; i >= 0; i--) {
        descer(i, n, L);
    }
}


int main() {

    int L[M] = {63, 33, 94, 47, 82, 80, 53, 61}; 
    int n = 8; 

    printf("Array inicial: ");
    for(int i = 0; i < n; i++) printf("%d ", L[i]);
    printf("\n");

    arranjar(n, L);
    printf("Apos arranjar (Heap Construido): ");
    for(int i = 0; i < n; i++) printf("%d ", L[i]);
    printf("\n");

    printf("Inserindo o elemento 99...\n");
    inserir(99, &n, L);
    printf("Apos insercao: ");
    for(int i = 0; i < n; i++) printf("%d ", L[i]);
    printf("\n");

    printf("Removendo a raiz\n");
    int removido = remover(&n, L);
    printf("Elemento removido: %d\n", removido);
    printf("Apos remocao: ");
    for(int i = 0; i < n; i++) printf("%d ", L[i]);
    printf("\n");

    return 0;
}