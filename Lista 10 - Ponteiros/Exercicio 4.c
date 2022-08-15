#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float matriz[3][3], *p;
    int i, j;

    p = matriz;

    for ( i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            printf("o endereco da linha %d coluna %d eh %d \n", i+1, j+1, p+i+j);



    return 0;
}