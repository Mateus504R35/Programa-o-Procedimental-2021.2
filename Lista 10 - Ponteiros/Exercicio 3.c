#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float array[10], *p;
    int i;

    p = array;

    for(i = 0; i < 10; i++)
    {
            printf("o endereco da posicao %d eh %d \n", i, ((p)+i));
    }


    return 0;
}