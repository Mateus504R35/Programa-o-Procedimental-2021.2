#include <stdio.h>
#include <stdlib.h>


int main ()     // exercicio 2
{
    int x, y, vetor [9], i;

    for (i = 1; i <= 8; i++)
    {
        printf("Escreva um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Escreva dois valores correspondentes a ordem dos numeros digitados: ");
    scanf("%d %d", &x, &y);

    printf("A soma dos numeros da posicao %d e %d eh %d", x, y, (vetor[x] + vetor[y]));


    return 0;
}