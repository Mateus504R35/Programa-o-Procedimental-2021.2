#include <stdio.h>
#include <stdlib.h>


int main ()     // exercicio 7
{
    int vet[6], i, pares = 0, impares = 0;
    printf("Escreva 6 numeros:\n");

    for(i = 0; i < 6; i++)
        scanf("%d", &vet[i]);

    for(i = 0; i < 6; i++)
    {
        if(vet[i] % 2 == 0)
        {
            printf("%d eh um numero par\n", vet[i]);
            pares = pares + vet[i];
        }
        else
        {
            printf("%d eh um numero impar\n", vet[i]);
            impares++;
        }
    }
    printf("\na soma dos pares eh %d e a quantidade de impares digitados eh %d", pares, impares);

    return 0;
}