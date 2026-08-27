#include <stdio.h>
#include <math.h>


int hash_divisao(int chave, int tamanho) {
    return chave % tamanho;
}

int hash_multiplicacao(int chave, int tamanho) {
    // Usando a razão áurea (constante recomendada por Knuth)
    double A = 0.6180339887; 
    
    double valor = chave * A;
    double parte_fracionaria = valor - (int)valor;
    
    return (int)(tamanho * parte_fracionaria);
}


int hash_dobra(int chave[8], int tamanho) {
    int soma = 0;
    
   
    for (int i = 0; i < 8; i += 2) {
        
        int pedaco = (chave[i] * 10) + chave[i+1];
        soma += pedaco;
    }
    
    return soma % tamanho;
}

int main() {
    // Exemplo de teste simples
    int tamanho = 100; 
    int chave_simples = 12345678;
    int chave_vetor[8] = {1, 2, 3, 4, 5, 6, 7, 8}; 
    
    printf("Hash (Divisao): %d\n", hash_divisao(chave_simples, tamanho));
    printf("Hash (Multiplicacao): %d\n", hash_multiplicacao(chave_simples, tamanho));
    printf("Hash (Dobra): %d\n", hash_dobra(chave_vetor, tamanho));
    
    return 0;
}