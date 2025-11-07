#include <stdio.h>
#include <string.h>

/*  4- Programa que le duas palavras da entrada e, na sada, imprime a menor palavra.  */

int main() {
	
    char palavra1[100], palavra2[100];

    
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    
    if (strlen(palavra1) < strlen(palavra2)) {
        printf("A menor palavra e: %s\n", palavra1);
    } else {
        printf("A menor palavra e: %s\n", palavra2);
    }

    return 0;
}

