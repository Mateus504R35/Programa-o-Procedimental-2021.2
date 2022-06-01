#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void main () // exercicio 18
{
    int i, soma, primos;
    primos = 0;
    soma = 0;

    for (i = 0; i < 2000000; i++)
    {
        primos++;
        if ((primos % 1 == 0) && (primos % i == 0))
        {
            soma = soma + i;
        }

    }
    printf("a soma de todos os primos eh: %d", soma);

}

