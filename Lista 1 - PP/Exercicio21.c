#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() // exercicio 21
{
    float MQ, ML;
    printf("Escreva o valor da massa em libras: ");
    scanf("%f", &ML);
    MQ = ML*0.45;
    printf("O valor da conversão para quilogramas é: %f", MQ);

    return 0;
}