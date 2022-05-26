#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () // exercicio 19
{
    int a;
    printf("Escreva um numero: ");
    scanf("%d", &a);

    if (a % 3 == 0)
    {
        printf("O numero eh divisivel por 3");
    }
    else
    {
        if(a % 5 == 0)
        {
            printf("O numero eh divisivel por 5");
        }
        else
        {
            printf("O numero nao eh divisivel por 3 ou por 5");
        }
    }

    return 0;
}
