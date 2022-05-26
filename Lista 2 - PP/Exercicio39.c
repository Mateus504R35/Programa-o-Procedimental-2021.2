#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 39
{
    int custo_fabrica, comiss_dist, impostos, custo_consum;
    printf("escreva o custo de fabrica: ");
    scanf("%d", &custo_fabrica);

    if (custo_fabrica <= 12000)
    {
        comiss_dist = custo_fabrica * 0.05;
        impostos = 0;
    }
    else
    {
        if ((custo_fabrica >= 12000) && (custo_fabrica <= 25000))
        {
            comiss_dist = custo_fabrica * 0.10;
            impostos = custo_fabrica * 0.15;
        }
        else
        {
            comiss_dist = custo_fabrica * 0.15;
            impostos = custo_fabrica * 0.20;
        }
    }

    custo_consum = custo_fabrica + comiss_dist + impostos;
    printf("O custo ao consumidor sera de: %d", custo_consum);

    return 0;
}