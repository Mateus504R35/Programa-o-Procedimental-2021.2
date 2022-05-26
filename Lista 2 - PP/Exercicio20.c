#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () // exercicio 20
{
    int a, b, c;
    printf("escreva 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a < b+c) || (b < c+a) || (c < b+a))
    {
        printf("podem ser valores de lados de um triangulo \n");
        if((a == b) && (a == c) && (b == c))
        {
            printf("eh um triangulo equilatero");
        }
        else
        {
            if((a == b) || (b == c) || (c == a))
            {
                printf("eh um triangulo isoceles");
            }
            else
            {
                printf("eh um triangulo escaleno");
            }
        }
    }
    else
    {
        printf("nao pode ser um lado de um triangulo");
    }


    return 0;
}
