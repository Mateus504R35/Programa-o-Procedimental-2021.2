#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 20
{
    int i, j, num;
    printf("escreva um numero: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
