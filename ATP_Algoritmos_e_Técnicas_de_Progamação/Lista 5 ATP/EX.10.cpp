#include <stdio.h>
#include <math.h>

/* 10. Faca um algoritmo para calcular a area de guras geometricas. Inicialmente o algoritmo devera apresentar ao
 usuario um menu principal, onde sera escolhida uma dentre as seguintes opcoes:
 1- Calcular a area do quadrado
 2- Calcular a area do retangulo
 3- Calcular a area do triangulo
 4- Calcular a area do crculo
 5- Sair do algoritmo
 Apos ser escolhida uma das guras, o usuario devera entao entrar com as devidas medidas da mesma para que o
 calculo possa ser realizado. Depois de informar o resultado do calculo, o algoritmo devera entao voltar ao menu
 principal ate que o usuario deseje nalizar o algoritmo.
 Obs: Utilizar as estruturas de selecao multipla (switch...case) e de repeticao com condicional no fimm */
 
 
int main() {
    int opcao;
    float lado, base, altura, raio, area;

    do {
        printf("\nMenu de Opções:\n");
        printf("1 - Calcular a area do quadrado\n");
        printf("2 - Calcular a area do retângulo\n");
        printf("3 - Calcular a area do triângulo\n");
        printf("4 - Calcular a area do círculo\n");
        printf("5 - Sair do algoritmo\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o lado do quadrado: ");
                scanf("%f", &lado);
                area = lado * lado;
                printf("Área do quadrado: %.2f\n", area);
                break;
            case 2:
                printf("Digite a base do retângulo: ");
                scanf("%f", &base);
                printf("Digite a altura do retângulo: ");
                scanf("%f", &altura);
                area = base * altura;
                printf("Área do retângulo: %.2f\n", area);
                break;
            case 3:
                printf("Digite a base do triângulo: ");
                scanf("%f", &base);
                printf("Digite a altura do triângulo: ");
                scanf("%f", &altura);
                area = (base * altura) / 2;
                printf("Área do triangulo: %.2f\n", area);
                break;
            case 4:
                printf("Digite o raio do círculo: ");
                scanf("%f", &raio);
                area = M_PI * raio * raio;
                printf("Área do círculo: %.2f\n", area);
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

