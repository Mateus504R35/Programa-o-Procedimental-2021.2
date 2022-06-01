#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 10
{
    int i, soma, numero;
    numero = 0;

    for (i = 0; i < 2*50; i++)
    {
        if (i % 2 == 0)
        {
            numero = i;
            soma = soma + numero;
        }

    }
    printf("A soma dos 50 primeiros pares eh: %d", soma);

    return 0;
}
