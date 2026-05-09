#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
 1. Crie um programa para calcular a distancia entre os pontos A e B no plano cartesiano. Cada ponto devera ser
 representado por um tipo ponto de nido pelo usuario. O tipo ponto sera um struct contendo as coordenadas x
 e y do ponto no plano. Utilize as funcoes sqrt e pow da biblioteca math.h.
 distanciaAB = (xB xA)2 +(yB yA)2
*/


typedef struct {
    float x;
    float y;
} Ponto;

float calcularDistancia(Ponto A, Ponto B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
}

int main() {
    
    Ponto A, B;
    float distancia;
    
    printf("Digite as coordenadas do ponto A (x y): ");
    scanf("%f %f", &A.x, &A.y);
    
    
    printf("Digite as coordenadas do ponto B (x y): ");
    scanf("%f %f", &B.x, &B.y);
    
    
    distancia = calcularDistancia(A, B);
    printf("A distancia entre os pontos A e B e: %.2f\n", distancia);
    
    return 0;
}
