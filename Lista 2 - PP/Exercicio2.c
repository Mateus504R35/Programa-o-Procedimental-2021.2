#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 2
{
    int a;
    printf("Escreva um numero: ");
    scanf("%d", &a);

    if (a >= 0)
        {
            double x;
            x = sqrt(a);
            printf("A raiz quadrada desse numero �: %.2f", x);
        }
    else
        {
            printf("Erro, escreva um numero positivo");
        }

    return 0;
}

