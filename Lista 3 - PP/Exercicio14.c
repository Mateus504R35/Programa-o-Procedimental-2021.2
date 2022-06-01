#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () // exercicio 14
{
    srand(time(NULL));
    int d1, d2, lanc, i;
    d1 = ((rand() % 6) + 1);
    d2 = ((rand() % 6) + 1) ;
    printf("digite a quantidade de vezes que o dado sera lançado: ");
    scanf("%d", &lanc);

    for(i = 0; i < lanc; i++)
    {
        if(d1 > d2)
        {
            printf("o primeiro dado é maior que o segundo: dado 1 = %d -- dado 2 = %d \n", d1, d2);
        }
        if(d1 < d2)
        {
            printf("o primeiro dado é menor que o segundo: dado 1 = %d -- dado 2 = %d \n", d1, d2);
        }
        else
        {
            printf("o primeiro dado é igual ao segundo: dado 1 = %d -- dado 2 = %d \n", d1, d2);
        }
    }

    return 0;
}