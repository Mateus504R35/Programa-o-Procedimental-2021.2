#include <stdio.h>
#include <stdlib.h>


int main ()     // exercicio 3
{
    int num[6], i;
    printf("Escreva 6 numeros: \n");

    for (i = 0; i < 6; i++)
        scanf("%d", &num[i]);

    printf("\n");

    for(i = 5; i >= 0; i--)
        printf("%d\n", num[i]);


    return 0;
}
