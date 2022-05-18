#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()  // exerc�cio 12
{
    float K, M;
    printf("Escreva a distancia em milhas: ");
    scanf("%f", &M);
    K = (1.61)*M;
    printf("A convers�o para quilometros �: %f", K);

    return 0;
}