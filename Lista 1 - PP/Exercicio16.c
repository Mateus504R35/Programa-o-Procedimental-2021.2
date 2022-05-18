#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() //exerc�cio 16
{
    float C, P;
    printf("Escreva um comprimento em polegadas: ");
    scanf("%f", &P);
    C = P/2.54;
    printf("A convers�o para centimetros �: %f", C);

    return 0;

}