#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main () // exercicio 25
{
    int a, b, c, x, d, rd, rx1, rx2;
    printf("A equacao do segundo grau tem a seguinte forma: \n");
    printf("ax^2 + bx + c = 0 \n");
    printf("Escreva um valor para a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (b*b) - (4*a*c);
    rd = sqrt (d);
    rx1 = -b + rd / 2*a;
    rx2 = -b - rd / 2*a;

    if (a == 0)
    {
        printf("nao eh equacao do segundo grau.");
    }
    else
    {
        if(d < 0)
        {
            printf("nao existe raiz, delta menor que 0");
        }
        else
        {
            if(d == 0)
            {
                printf ("raiz unica = %d", rx1);
            }
            else
            {
                printf("as raizes sao: %d %d", rx1, rx2);
            }
        }
    }


    return 0;
}