#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 11
{
    int numero, i;
    printf("Escreva um numero: ");
    scanf("%d", &numero);

    for (i = 0; i <= numero; i++)
    {
        printf("%d \n", i);
    }


    return 0;
}