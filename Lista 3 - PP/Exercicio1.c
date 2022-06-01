#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()      // exercicio 1
{
    int a, b, i;

    for (i = 0; i < 5; i++)
    {
        a = 1 + i;
        b = 3 * a;
        printf("%d \n", b);
    }

    return 0;
}