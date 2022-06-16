#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()     // exercicio 6
{
    srand(time(NULL));
    int i, j, m[5][5];

    for(i = 0; i < 5; i ++)
    {
        for(j = 0; j < 5; j++)
        {
            m[i][j] = rand() % 99;
        }
    }

    printf("%d | %d | %d | %d | %d\n", m[0][0], m[0][1], m[0][2], m[0][3], m[0][4]);
    printf("%d | %d | %d | %d | %d\n", m[1][0], m[1][1], m[1][2], m[1][3], m[1][4]);
    printf("%d | %d | %d | %d | %d\n", m[2][0], m[2][1], m[2][2], m[2][3], m[2][4]);
    printf("%d | %d | %d | %d | %d\n", m[3][0], m[3][1], m[3][2], m[3][3], m[3][4]);
    printf("%d | %d | %d | %d | %d\n", m[4][0], m[4][1], m[4][2], m[4][3], m[4][4]);


    return 0;
}