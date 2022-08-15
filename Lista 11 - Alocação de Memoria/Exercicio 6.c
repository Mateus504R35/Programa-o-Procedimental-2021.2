#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nlinha, ncoluna, i, j;
    int **m;
    printf("Escreva o numero de linhas e colunas de uma matriz: ");
    scanf("%d %d", &nlinha, &ncoluna);

    m = (int**) malloc(nlinha*sizeof(int));

    for(i = 0; i < nlinha; i++)
    {
        for(j = 0; j < ncoluna; j++)
        {
            m[i] = (int*) malloc(ncoluna*sizeof(int));
        }
    }

    for(i = 0; i < nlinha; i++)
    {
        for(j = 0; j < ncoluna; j++)
        {
            printf("Escreva o numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < nlinha; i++)
    {
        for(j = 0; j < ncoluna; j++)
        {
            printf("O numero da posicao [%d][%d]: %d \n", i, j, m[i][j]);
        }
    }

    for(i = 0; i < nlinha; i++)
    {
        free(m[i]);
    }
    free(m);

    return 0;
}