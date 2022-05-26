#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()     // exercicio 27
{
    int i;
    printf("escreva a idade de um nadador: ");
    scanf("%d", &i);

    if ((i >= 5) && (i <= 7))
    {
        printf("categoria - Infantil A");
    }
    
    else
    {
        if ((i >= 8) && (i <= 10))
        {
            printf("categoria - Infantil B");
        }
        else
        {
            if ((i >= 11) && (i <= 13))
            {
                printf("categoria - Juvenil A");
            }
            else
            {
                if ((i >= 14) && (i <= 17))
                {
                    printf ("categoria - Juvenil B");
                }
                else
                {
                    if (i >= 18)
                    {
                        printf("categoria - Senior");
                    }
                    else
                    {
                        printf("nao pode nadar");
                    }
                }
            }
        }
    }

  
    return 0;
}