#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() // exercicio 26
{
    float M, H;
    printf("Escreva o valor em metros quadrados: ");
    scanf("%f", &M);
    H = M*0.0001;
    printf("O valor convertido em hectares é: %f", H);

    return 0;

}
