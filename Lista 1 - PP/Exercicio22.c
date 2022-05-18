#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 22
{
    float J, M;
    printf("Escreva o valor em jardas:");
    scanf("%f", &J);
    M = 0.91*J;
    pritf("O valor em metros é: %f", M);

    return 0;
}
