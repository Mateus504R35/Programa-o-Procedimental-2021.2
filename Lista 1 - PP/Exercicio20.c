#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()  // exercicio 20
{
    float MQ, ML;
    printf("Escreva o valor da massa em quilogramas: ");
    scanf("%f", &MQ);
    ML = MQ/0.45;
    printf("O valor da conves�o da massa para libras �: %f", ML);

    return 0;
}