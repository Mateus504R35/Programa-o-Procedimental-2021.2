#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 6
{
    int i;
    float a, b, m;
    b = 0;

    for (i = 0; i <= 9; i++)
    {
        printf("DIGITE UM VALOR: ");
        scanf("%f", &a);
        b = b + a;
    }
    m = b / i;
    printf(" A MEDIA DESSES VALORES E: %.1f", m);


    return 0;
}