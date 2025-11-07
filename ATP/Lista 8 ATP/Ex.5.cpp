#include <stdio.h>
#include <stdlib.h>

/*
5. Criar um programa que entre com elementos para uma matriz tridimensional inteira com dimens˜oes 5 x 4 x 2.
Imprima a matriz em dois passos: primeiro a profundidade 0 e depois a profundidade 1.
*/

int main() {

    int matriz[5][4][2];
    
   
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Digite o elemento matriz[%d][%d][%d]: ", i, j, k);
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }
    
    
    printf("\nMatriz na profundidade 0:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j][0]);
        }
        printf("\n");
    }
    
    
    printf("\nMatriz na profundidade 1:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j][1]);
        }
        printf("\n");
    }
    
    return 0;
}