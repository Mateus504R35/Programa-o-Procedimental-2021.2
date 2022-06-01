#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 7
{
    int i;
    float a, b, c, m;
    b = 0;

    for (i = 0; i <= 9; i++)
    {
        printf("ESCREVA UM VALOR: ");
        scanf("%f", &a);
        b = b + a;
        if (a < 0)
        {
            b = b - a;
        }
        else
        {
            c++;
        }
    }
    m = b / c;
    printf("A MEDIA DESSES VALORES, IGNORANDO OS POSITIVOS E: %.1f", m);

    return 0;
}