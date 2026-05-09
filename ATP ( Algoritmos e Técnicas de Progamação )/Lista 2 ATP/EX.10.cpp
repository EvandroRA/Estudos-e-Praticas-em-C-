#include <stdio.h>
#include <stdlib.h>

/* 
 Elabore um algoritmo que dada a idade de um nadador classi ca-o em uma das seguintes categorias: infantil A
 =5-7 anos; infantil B = 8-10 anos; juvenil A = 11-13 anos; juvenil B = 14-17 anos; adulto = maiores de 18 anos
*/

int Idade;

int main() {
    

    printf("Digite a idade do nadador: ");
    scanf("%d", &Idade);

    switch (Idade) {
    	
        case 5: case 6: case 7:
            printf("Categoria: Infantil A\n");
            break;

        case 8: case 9: case 10:
            printf("Categoria: Infantil B\n");
            break;

        case 11: case 12: case 13:
            printf("Categoria: Juvenil A\n");
            break;

        case 14: case 15: case 16: case 17:
            printf("Categoria: Juvenil B\n");
            break;

        default:
        	
            if (Idade >= 18) {
                printf("Categoria: Adulto\n");
            } 
            
			else {
                printf("Idade invalida\n");
            }
            
    }

    return 0;
}
