#include <stdio.h>
#include <stdlib.h>

int main ()     // exercicio 5
{
    int a[10][10], i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(i < j)
                a[i][j] = ((2*i)+(7*j)-2);

            if(i > j)
                a[i][i] = ((4*(i*i*i))-(5*(j*j))+1);
            else
                a[i][j] = ((3*(i*i))-1);
        }
    }
    
     for(i = 0; i < 10; i++)
     {
        for(j = 0; j < 10; j++)
        {
            printf("%d\n", a[i][j]);
        }
     }


    return 0;
}