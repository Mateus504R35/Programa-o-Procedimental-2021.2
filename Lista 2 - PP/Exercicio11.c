#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 11
{
    int a, b, c, d;
    printf("Escreva um numero:");
    scanf("%d", &a);

    if (a >= 0)
    {
        b = a / 100;
        c = (a % 100)/10;
        d = (a % 100)%10;

       printf("A soma dos algarismos desse numero eh: %d", b+c+d);
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}