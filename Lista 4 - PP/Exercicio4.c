#include <stdio.h>
#include <stdlib.h>


int main ()     // exercicio 4
{
    int num[5], i, maior, menor;
    maior = 0;
    menor = 0;

    for(i = 0; i < 5; i++)
    {
        printf("escreva um numero: ");
        scanf("%d", &num[i]);
    }

    for(i = 1; i < 5; i++)
    {
        if(num[i] < num[menor])
            menor = i;
        if(num[i] > num[maior])
            maior = i;
    }
    printf("O menor eh %d e o menor eh %d", num[menor], num[maior]);

    return 0;
}
