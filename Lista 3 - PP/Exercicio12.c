#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 12
{
    int i, numero, divisor, somadiv, div;
    somadiv = 0;
    divisor = 0;
    printf("escreva um numero: ");
    scanf("%d", &numero);

    for(i = 0; i < numero; i++)
    {
        divisor++;
        if ((divisor < numero) && (numero % divisor == 0))
        {
            div = divisor;
            somadiv = somadiv + div;
            printf("%d\n", div);
        }
    }
    printf("a soma e: %d", somadiv);

    return 0;
}