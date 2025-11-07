#include<stdio.h>
#include<stdlib.h>

/* 
 2. Dados tres valores A, B e C, construa um programa, que imprima os valores de forma ascendente (do menor
 para o maior)
*/

float V1, V2, V3,Auxiliar;

int main(){
	
	printf("Digite o Valor 1 \n");
    scanf("%f", &V1);
    
    printf("Digite o Valor 2 \n");
    scanf("%f", &V2);
    
    printf("Digite o Valor 3 \n");
    scanf("%f", &V3);

    if (V1 > V2) {  // V1 recebe V2 e V2 recebe V1 //
        Auxiliar = V1; 
        V1 = V2; 
        V2 = Auxiliar; 
    }
    if (V2 > V3) {  // V2 recebe V3 e V3 recebe V2 //
        Auxiliar = V2; 
        V2 = V3; 
        V3 = Auxiliar; 
    }
    if (V1 > V2) { // V1 recebe V2 novamente e V2 recebe V1 //
        Auxiliar = V1; 
        V1 = V2; 
        V2 = Auxiliar; 
    }

    printf("%0.2f, %0.2f, %0.2f\n", V1, V2, V3);

    return 0;

}