#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () // exercicio 9
{
    int i, numero, contador, impar;
    contador = 1;
    printf("ESCREVA UM NUMERO: ");
    scanf("%d", &numero);

    for (i = 0; i <= 2*numero; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}
