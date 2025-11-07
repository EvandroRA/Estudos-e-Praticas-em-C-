#include <stdio.h>
#include <stdlib.h>

/*
4. Faca uma fun¸c˜ao que receba um n´umero e diga se ´e um n´umero perfeito. Um n´umero ´e perfeito se a soma de
seus divisores ´e igual ao pr´oprio n´umero. Ex: 1+ 2 + 3 = 6, 6 ´e um n´umero perfeito.
*/

int ehNumeroPerfeito(int numero) {

    int soma = 0;

    for (int i = 1; i < numero; i++) {

        if (numero % i == 0) {

            soma += i;
        }
    }

    if (soma == numero) {

        return 1; // Verdadeiro: é perfeito
    } 
    else {

        return 0; // Falso: não é perfeito
    }
}


int main() {

    int valor;

    printf("Digite um número: ");
    scanf("%d", &valor);

    if (ehNumeroPerfeito(valor)) {

        printf("%d é um número perfeito!\n", valor);
    } 
    else {
        
        printf("%d não é um número perfeito.\n", valor);
    }

    return 0;
}
