#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 26
{
    int d, ql, c;
    printf("Escreva a distancia e a quantidade de litros de gasolina consumidos por um carro: ");
    scanf("%d %d", &d, &ql);

    c = d/ql;

    if (c < 8)
    {
        printf("Venda o carro!");
    }
    else
    {
        if ((c >= 8) && (c <= 14))
        {
            printf("Economico!");
        }
        else
        {
            printf("Super economico!");
        }
    }


    return 0;
}
