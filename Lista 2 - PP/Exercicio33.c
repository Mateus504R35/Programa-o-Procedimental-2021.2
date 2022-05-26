#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 33
{
    float p, pn;
    printf("escreva o preco de um produto: ");
    scanf("%f", &p);

    if (p <= 50)
    {
        pn = p + (p*0.05);
    }
    else
    {
        if ((p >= 50) && (p < 100))
        {
            pn = p + (p*0.10);
        }
        else
        {
            pn = p + (p*0.15);
        }
        
    }

    printf("O preco vai ser de: %.2f", pn);

    return 0;
}