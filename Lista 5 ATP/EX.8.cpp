#include <stdio.h>
#include <stdlib.h>

/*   8. Escreva um algoritmo que leia um conjunto de 50 chas, cada uma contendo a altura e o sexo (M/F) de uma
 pessoa. Calcule e imprima:
 (a) A maior e a menor altura da turma
 (b) A media de altura das mulheres
 (c) A media de altura da turma */


int main() {
	
    int i, totalMulheres = 0;
    float altura, maiorAltura = 0, menorAltura = 999;
    float somaAlturas = 0, somaAlturasMulheres = 0, mediaAlturaMulheres;
    char sexo;

    for (i = 0; i < 50; i++) {
    	
        printf("Digite a altura (m) e o sexo (M/F): ");
        scanf("%f %c", &altura, &sexo);

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }
        somaAlturas += altura;

        if (sexo == 'F' || sexo == 'f') {
            somaAlturasMulheres += altura;
            totalMulheres++;
        }
    }

    if (totalMulheres > 0) {
        mediaAlturaMulheres = somaAlturasMulheres / totalMulheres;
    } else {
        mediaAlturaMulheres = 0;
    }

    printf("Maior altura: %.2f m\n", maiorAltura);
    printf("Menor altura: %.2f m\n", menorAltura);
    printf("Média altura das mulheres: %.2f m\n", mediaAlturaMulheres);
    printf("Média altura da turma: %.2f m\n", somaAlturas / 50);

    return 0;
}


