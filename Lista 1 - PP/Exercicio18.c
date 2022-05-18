#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() // exerc�cio 18
{
    float M, L;
    printf("Escreva o valor em metros c�bicos: ");
    scanf("%f", &M);
    L = 1000*M;
    printf("O valor em litros �: %f", L);

    return 0;
}