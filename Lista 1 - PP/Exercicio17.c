#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() // exerc�cio 17
{
    float C, P;
    printf("Escreva um comprimento em centimetros: ");
    scanf("%f", &C);
    P = C/2.54;
    printf("A convers�o para polegadas �: %f", P);

    return 0;
}