#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 6
{
        int a, b;
        printf("Escreva dois numeros: ");
        scanf("%d %d", &a, &b);

        if (a > b)
            {
                printf("O numero %d � o maior e a diferen�a entre os dois numeros digitados � %d .", a, a-b);
            }
        else
            {
                printf("O numero %d � o maior e a diferen�a entre os dois numeros digitados � %d .", b, b-a);
            }

    return 0;
}
