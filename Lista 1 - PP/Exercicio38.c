#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 38
{
    float s, a;
    printf("Escreva o valor do salário: ");
    scanf("%f", &s);
    a = s + (s*0.25);
    printf("O valor do aumento do salário em 25%% é: %f", a);

    return 0;

}