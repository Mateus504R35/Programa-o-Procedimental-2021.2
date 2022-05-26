#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 5
{
    int a;
    printf("Escreva um numero: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        {
            printf("Esse numero � par.");
        }
    else
        {
            printf("Esse numero � impar.");
        }

    return 0;
}
