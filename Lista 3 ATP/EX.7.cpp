#include <stdio.h>
#include <stdlib.h>

/* 
 Escreva um programa que leia um peso na Terra, o numero de um planeta e imprima o valor do peso neste
 planeta. A relacao de planetas e dada a seguir juntamente com o valor das gravidades relativas a Terra:
 Gravidade Relativa Planeta
 1 0,37
 Mercurio
 2 0,88
 Venus
 3 0,38
 Marte
 4 2,64
 Jupiter
 5 1,15
 Saturno
 6 1,17
 Urano

*/

float PesoTerra, PesoPlaneta;
int Opcao;
    
    
int main() {
    

    
    printf("Escolha um planeta pelo número correspondente:\n");
    printf("1 - Mercurio (0.37) \n");
    printf("2 - Venus (0.88) \n");
    printf("3 - Marte (0.38) \n");
    printf("4 - Jupiter (2.64) \n");
    printf("5 - Saturno (1.15) \n");
    printf("6 - Urano (1.17) \n");
    
    
    printf("Digite seu peso na Terra (kg): ");
    scanf("%f", &PesoTerra);

    printf("Digite o numero do planeta: ");
    scanf("%d", &Opcao);

    
    switch (Opcao) {
        case 1:
            PesoPlaneta = PesoTerra * 0.37;
            printf("Seu peso em Mercurio seria: %.2f kg\n", PesoPlaneta);
            break;
        case 2:
            PesoPlaneta = PesoTerra * 0.88;
            printf("Seu peso em Venus seria: %.2f kg\n", PesoPlaneta);
            break;
        case 3:
            PesoPlaneta = PesoTerra * 0.38;
            printf("Seu peso em Marte seria: %.2f kg\n", PesoPlaneta);
            break;
        case 4:
            PesoPlaneta = PesoTerra * 2.64;
            printf("Seu peso em Jupiter seria: %.2f kg\n", PesoPlaneta);
            break;
        case 5:
            PesoPlaneta = PesoTerra * 1.15;
            printf("Seu peso em Saturno seria: %.2f kg\n", PesoPlaneta);
            break;
        case 6:
            PesoPlaneta = PesoTerra * 1.17;
            printf("Seu peso em Urano seria: %.2f kg\n", PesoPlaneta);
            break;
        default:
            printf("Opcao invalida! Escolha um número entre 1 e 6.\n");
    }

    return 0;
}
