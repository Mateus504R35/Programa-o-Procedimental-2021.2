#include <stdio.h>
#include <stdlib.h>


int main ()     // exercicio 6
{
    int vet[10], i, j;
    printf("Escreva 10 numeros: \n");

    for(i = 0; i < 10; i++)
        scanf("%d", &vet[i]);

    for(i = 0; i < 10; i++)
    {
        if(vet[i] % vet[i] == 0)
        {
            printf("O numero %d eh primo e esta na posicao %d\n", vet[i], i);
        }
    }

    return 0;
}
