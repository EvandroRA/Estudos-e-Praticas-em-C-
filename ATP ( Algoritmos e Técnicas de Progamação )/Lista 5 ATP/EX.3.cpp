#include <stdio.h>
#include <stdlib.h>

/*  3. Dado um pais A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um pais B com 7000000
 de habitantes e uma taxa de natalidade de 2% ao ano, calcule e imprima o tempo necessario para que a populacao
 do pas A ultrapasse a populacao do pas B. */

int main() {
	
    float populacaoA = 5000000, populacaoB = 7000000;
    int tempoNescessario = 0;
    
   while (populacaoA <= populacaoB) {
    	
        populacaoA = (populacaoA + (populacaoA*0.03));
        populacaoB = (populacaoB + (populacaoB*0.02));
        tempoNescessario++;
    }
   
	printf("O tempo nescessario e de: %d anos",tempoNescessario);
   
    return 0;
}
