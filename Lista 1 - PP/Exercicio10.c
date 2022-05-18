#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()  //exerc�cio 10
{
    float x, y; 
    printf("Escreva uma velocidade em km/h: ");
    scanf("%f", &x);
    y = x/3.6;
    printf("A convers�o para m/s �: %f", y);

    return 0;
}

