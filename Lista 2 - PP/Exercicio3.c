#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 3
{
    float a;
    printf("Escreva um numero: ");
    scanf("%f", &a);

    if (a >= 0)
        {
            double x;
            x = sqrt(a);
            printf("A raiz quadrada desse numero �: %.2f", x);
        }
    else
        {
            printf("O dobro desse numero �: %.2f", a*a);
        }

    return 0;
}