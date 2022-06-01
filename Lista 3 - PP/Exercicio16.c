#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 16
{
    int anos;
    float chico, ze;
    chico = 1.50;
    ze = 1.10;

    while (chico >= ze)
    {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("sao necessarios %d de anos", anos);

    return 0;
}
