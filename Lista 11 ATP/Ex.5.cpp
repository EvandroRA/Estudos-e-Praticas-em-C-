#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5. Faca uma funcao para receber uma lista de nomes e um nome a ser procurado. Caso o nome esteja na lista
 a funcao devera retornar a posicao do mesmo na lista, caso contrario devera retornar-1. Faca um programa
 principal para testar a funcao.
*/



int VerificarNome(char listaNomes[][5], char nomeProcurado[]) {
    
    for (int i = 0; i < 5; i++) {

        if (strcmp(listaNomes[i], nomeProcurado) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {

    char listaNomes[5][5];
    char nomeBusca[5];

    for (int i = 0; i < 5; i++) {
        
        printf("Digite o %dº nome: ", i + 1);
        scanf("%s", listaNomes[i]);
    }

    printf("Digite o nome a ser procurado: ");
    scanf("%s", nomeBusca);

    int posicao = VerificarNome(listaNomes, nomeBusca);

    if (posicao != -1) {
        printf("Nome encontrado na posição %d.\n", posicao);
    } else {
        printf("Nome não encontrado na lista.\n");
    }

    return 0;
}
