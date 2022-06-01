#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 8
{
    int numero, maior, menor, i;
    maior = 0;
    menor = 0;

    for (i = 0; i <= 9; i++)
    {
        printf("ESCREVA UM VALOR: ");
        scanf("%d", &numero);

        if(i != 0)
        {
            if(numero < menor)
            {
                menor = numero;
            }
            if(numero > maior)
            {
                maior = numero;
            }
        }
        else
        {
            maior = menor = numero;
        }

    }
    printf("O MAIOR NUMERO -- %d\n  E O MENOR -- %d", maior, menor);


    return 0;
}