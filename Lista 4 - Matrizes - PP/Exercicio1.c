#include <stdio.h>
#include <stdlib.h>

int main ()     // exercicio 2 - matrizes
{
    int mat[4][4], i, j, maiores = 0;
    printf("escreva 16 valores: ");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 10)
            {
                maiores++;
            }
        }
    }

    printf("Os valores maiores que 10 sao: %d", maiores);
    

    return 0;
}