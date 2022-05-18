#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 28
{
    int x, y, z, w;
    printf("Escreva 3 valores: ");
    scanf("%d %d %d", &x, &y, &z);
    w = ((x*x) + (y*y) + (z*z));
    printf("A soma dos quadrados dos 3 números são: %d", w);

    return 0;
}
