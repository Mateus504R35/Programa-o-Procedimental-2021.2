#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() //exerc�cio 19
{
    float M, L;
    printf("Escreva o valor em litros: ");
    scanf("%f", &L);
    M = L/1000;
    printf("O valor em metros cubicos �: %f", M);

    return 0;
}