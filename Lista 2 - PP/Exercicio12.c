#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 12
{
    int a;
    float b;
    printf("Escreva um número:");
    scanf("%d", &a);

    if (a >= 0)
    {
        b = log (a);
        printf("O logaritmo desse numero é: %.2f", b);
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}