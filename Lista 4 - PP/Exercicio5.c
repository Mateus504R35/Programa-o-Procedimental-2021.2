#include <stdio.h>
#include <stdlib.h>


int main ()     // exercicio 5
{
    int i, vet[50];

    for(i = 0; i < 50; i++)
    {
        vet[i] = ((i+5*i)%(i+1));
        printf("%d\n", vet[i]);
    }
    return 0;
}
