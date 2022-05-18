#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 37
{
    float v, vd; 
    printf("Escreva o valor do produto: ");
    scanf("%f", &v);
    vd = v - (v * 0.12);
    printf("O valor do produto com 12%% de desconto é: %f", vd);

    return 0;
}