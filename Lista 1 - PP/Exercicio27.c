#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 27
{
    float M, H;
    printf("Escreva o valor em hectares: ");
    scanf("%f", &H);
    M = H*10000;
    printf("O valor convertido em metros quadrados é: %f", M);

    return 0;

}
