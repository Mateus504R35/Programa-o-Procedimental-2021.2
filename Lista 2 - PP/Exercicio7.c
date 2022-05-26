#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()  // exercicio 7
{
        int a, b;
        printf("Escreva dois numeros: ");
        scanf("%d %d", &a, &b);
        if (b > a)
            {
                printf("O maior numero � %d", b);
            }
        else
            {
                if (a > b)
                {
                    printf("O maior numero eh %d", a);
                }
                else
                {
                    printf("Os numeros s�o iguais ");
                }
            }

            return 0;
}