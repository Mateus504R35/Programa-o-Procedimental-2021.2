#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 29
{
    int x, y, z, w, med;
    printf("Escreva 4 notas: ");
    scanf ("%d %d %d %d", &x, &y, &z, &w);
    med = (x+y+z+w)/4;
    printf("A média ponderada das 4 notas é: %d", med);

    return 0;

}