#include <stdio.h>
#include <stdlib.h>

int main ()     // exercicio 2 - matrizes
{
    int num[5][5], maiorl = 0, maiorc = 0, i, j;
    printf("escreva 25 numeros: \n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    for(i = 1; i < 5; i++)
    {
        for(j = 1; j < 5; j++)
        {
            if(num[i][j] > num[maiorl][maiorc])
            {
            maiorl = i;
            maiorc = j;
            }
        }
    }

    printf("o maior valor esta na linha %d e coluna %d", maiorl, maiorc);


    return 0;
}