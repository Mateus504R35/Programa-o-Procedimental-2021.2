#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() // exerc�cio 14
{
    float R, G, Pi;
    Pi = 3.141592;
    printf("Escreva um �ngulo em graus: ");
    scanf("%f", &G);
    R = (G*Pi)/180;
    printf("A convers�o para radianos �: %f", R);

    return 0;
}