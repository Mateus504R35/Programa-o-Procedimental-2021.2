#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 2
{
    int a, b, c, i;

    for (i = 1; i <= 100; i++)
    {
        printf("%d \n", i);
    }

    i = 1;
    while (i <= 100)
    {
        printf("%d \n", i);
        i++;
    }

    i = 1;
    do
    {
        printf("%d \n", i);
        i++;
    }while(i <= 100);

    return 0;
}
