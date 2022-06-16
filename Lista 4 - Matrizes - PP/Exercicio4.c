#include <stdio.h>
#include <stdlib.h>

int main ()     // exercicio 4
{
    int num[5][5], i, j, x, linha = 5, coluna = 5;
    printf("escreva um numero: \n");
    scanf("%d", &x);
    fflush(stdin);
    printf("escreva 25 numeros: \n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j ++)
        {
            scanf("%d", &num[i][j]);
            if(num[i][j] == x)
            {
                linha = i;
                coluna = j;
            }
        }
    }

    if( (linha != 5) && (coluna != 5))
    printf("%d esta localizado em linha %d coluna %d", x, linha, coluna);
    else
    printf("Nao encontrado");


    return 0;
}