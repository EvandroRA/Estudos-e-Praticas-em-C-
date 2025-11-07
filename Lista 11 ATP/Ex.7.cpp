#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
 7. Embaralha palavra. Construa uma funcao que receba uma string como parametro e devolva outra string com
 os carateres embaralhados. Por exemplo: se funcao receber a palavra python, pode retornar npthyo, ophtyn ou
 qualquer outra combinacao possvel, de forma aleatoria
*/


void embaralharPalavra(char *palavra) {

    int tamanho = strlen(palavra);
    srand(time(NULL));

    for (int i = tamanho - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        // Troca palavra[i] com palavra[j]
        char temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }
}

int main() {

    char palavra[100];

    printf("Digite uma palavra: ");
    scanf(" %[^\n]", palavra);

    embaralharPalavra(palavra);

    printf("Palavra embaralhada: %s\n", palavra);

    return 0;
}
