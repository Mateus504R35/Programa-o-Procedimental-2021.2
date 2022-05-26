#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 8
{
    float a, b;
    printf("Escreva duas notas: ");
    scanf("%f %f", &a, &b);

    if ((a >= 0.0 && a <= 10.0) && (b >= 0.0 && b <= 10.0))
    {
        printf("A media dessas notas eh: %.2f", (a+b)/2);
    }
    else
    {
        printf("N�o existe nota valida.");
    }

    return 0;
}
