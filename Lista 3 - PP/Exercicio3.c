#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 3
{
    int i = 10;

    while (i >= 0)
    {
        printf("%d \n", i);
        i--;
        if (i < 0)
        {
            printf("FIM!");
        }

    }

    return 0;
}