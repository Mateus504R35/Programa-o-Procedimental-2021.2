#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 25
{
    float M, A;
    printf("Escreva o valor em acres:");
    scanf("%f", &A);
    M = A*4048.58;
    printf("O valor convertido em metros quadrados é: %f", M);

    return 0;
}