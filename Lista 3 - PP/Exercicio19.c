#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 19
{
    int i, a, b, dist, primos;
    primos = 0;
    printf("escreva dois numeros: ");
    scanf("%d %d", &a, &b);
    dist = b-a;

    for (i = 0; i < dist; i++)
    {
        if((i % 1 == 0) && (i % i == 0))
        {
            primos = primos + 1;
        }

    }
    printf("primos entre os dois numeros: %d", primos);

    return 0;
}

