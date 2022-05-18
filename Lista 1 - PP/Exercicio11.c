#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()  //exerc�cio 11
{
    float x, y;
    printf("Escreva uma velocidade em m/s: ");
    scanf("%f", &x);
    y = x*3.6;
    printf("A convers�o para km/h �: %f", y);

    return 0;
}
