#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 4
{
    int a;
    printf("Escreva um numero: ");
    scanf("%d", &a);

    if (a >= 0)
        {
            double x, y;
            x = sqrt(a);
            y = a*a;

            printf("A raiz quadrada desse numero �: %.2f e seu quadrado �: %.2f", x, y);

        }
    else
        {
            printf("Erro");
        }

   return 0;
}