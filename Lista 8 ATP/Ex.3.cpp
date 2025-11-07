#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
3. Fa¸ca um programa para criar uma matriz de dimens˜oes 4x4 do tipo char. Inicialize todas as posi¸c˜oes da matriz
com a letra x. Em seguida dois caracteres y dever˜ao ser inseridos na matriz em posi¸c˜oes aleat´orias sem que
o usu´ario saiba onde.Crie uma repeti¸c˜ao para permitir ao usu´ario entrar com coordenadas da matriz visando
acertar em quais posi¸c˜oes da matriz foram colocados os caracteres y. Quando um y for localizado informe ao
usu´ario que ele acertou. Ao final informe o n´umero de tentativas que foram necess´arias para descobrir as posi¸c˜oes
dos caracteres y.
*/

int main() {

    int linha, coluna;
    char matriz[4][4];
    int x1, y1, x2, y2, tentativas = 0, acertos = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = 'x';
        }
    }
    
    
    srand(time(NULL));

    x1 = rand() % 4;
    y1 = rand() % 4;

        do {

        x2 = rand() % 4;
        y2 = rand() % 4;

        } while (x1 == x2 && y1 == y2); // para os serem em lugares diferentes
    
    matriz[x1][y1] = 'y';
    matriz[x2][y2] = 'y';
    
    
    while (acertos < 2) {

        printf("\nDigite as coordenadas (linha e coluna) de 0 a 3: ");
        scanf("%d %d", &linha, &coluna);
        
        if (linha < 0 || linha > 3 || coluna < 0 || coluna > 3) {
            printf("Coordenadas inválidas. Tente novamente.\n");
            continue;
        }
        
        tentativas++;
        
        if (matriz[linha][coluna] == 'y') {
            printf("Acertou! O 'y' estava em (%d, %d).\n", linha, coluna);
            matriz[linha][coluna] = '-'; // Marca como encontrado
            acertos++;
        } else {
            printf("Errou! Tente novamente.\n");
        }
    }
    
    printf("\nParabens! Você encontrou os dois 'y' em %d tentativas.\n", tentativas);
    return 0;
}
