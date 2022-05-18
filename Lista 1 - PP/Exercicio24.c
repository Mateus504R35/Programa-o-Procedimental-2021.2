#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 24 
{
    float M, A;
    printf("Escreva o valor em metros quadrados:");
    scanf("%f", &M);
    A = M*0.000247;
    printf("O valor convertido em acres é: %f", A);

    return 0;
}
