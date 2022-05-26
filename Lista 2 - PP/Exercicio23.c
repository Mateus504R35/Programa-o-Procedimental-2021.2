#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () // exercicio 23
{
    int an;
    printf("escreva um ano: ");
    scanf("%d", &an);

    if ((an % 400 == 0) || ((an % 4 == 0) && (an % 100 != 0)))
    {
        printf("esse ano eh bissexto");
    }
    else
    {
        printf("esse ano nao eh bissexto");
    }

    return 0;
}

