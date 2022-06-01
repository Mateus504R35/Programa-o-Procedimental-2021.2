#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 13
{
    int i, numero, soma;
    soma = 0;
    numero = 0;

    for (i = 0; i <= 1000; i++)
    {
        if((i % 3 == 0) || (i % 5 == 0))
        {
            soma = soma + i;
        }
    }    
    printf("a soma de todos os numeros abaixo de 1000 eh: %d", soma);

    return 0;
}