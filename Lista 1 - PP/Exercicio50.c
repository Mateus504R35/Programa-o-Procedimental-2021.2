#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 50
{
    int x, y, d;

    printf("Escreva a coordenada X: ");
    scanf("%d", &x);
    printf ("Agora escreva a coordenada Y: ");
    scanf("%d", &y);

    d = y - x;

    printf("A distancia entre X e Y da origem é: %d", d);

    return 0;

}