#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()  // exercicio 30
{
    int a, b, c;
    printf("escreva 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (((a < b) && (a < c)) && (b < c))
    {
        printf("%d - %d - %d", a, b, c);
    }
    else 
    {
        if (((a < b) && (a < c)) && (b > c))
        {
            printf("%d - %d - %d", a, c, b);
        }
        else
        {
            if (((a < b) && (a > c)) && (b > c))
            {
                printf("%d - %d - %d", c, a, b);
            }
            else
            {
                if (((a > b) && (a > c)) && (b < c))
                {
                    printf("%d - %d - %d", b, c, a);
                }
                else
                {
                    if (((a > b) && (a > c)) && (b > c))
                    {
                        printf("%d - %d - %d", c, b, a);
                    }
                    else
                    {
                        printf("%d - %d - %d", b, a, c);
                    }
                }
                
            }
        }
    }

    return 0;
}
