#include <stdio.h>
#include <stdlib.h>

int main ()     // exercicio 2 - matrizes
{
    int mat[5][5], i, j;

    for(i = 0, j = 0; i < 5, j < 5; i++, j++)
        mat[i][j] = 1;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(mat[i][j] != 1)
                mat[i][j] = 0;
        }
    }
    
    printf("%d | %d | %d | %d | %d\n", mat[0][0], mat[0][1], mat[0][2], mat[0][3], mat[0][4]);
    printf("%d | %d | %d | %d | %d\n", mat[1][0], mat[1][1], mat[1][2], mat[1][3], mat[1][4]);
    printf("%d | %d | %d | %d | %d\n", mat[2][0], mat[2][1], mat[2][2], mat[2][3], mat[2][4]);
    printf("%d | %d | %d | %d | %d\n", mat[3][0], mat[3][1], mat[3][2], mat[3][3], mat[3][4]);
    printf("%d | %d | %d | %d | %d\n", mat[4][0], mat[4][1], mat[4][2], mat[4][3], mat[4][4]);

    return 0;
}