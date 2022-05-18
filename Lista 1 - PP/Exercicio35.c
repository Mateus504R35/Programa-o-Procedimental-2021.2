#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 35
{
    float a, b, c, h;
    printf("Escreva os valores do cateto de um triangulo retangulo: ");
    scanf("%f %f", &a, &b);
    c = (a*a) + (b*b);
    h = sqrt(c);
    printf("A hipotenusa desse triangulo retangulo é: %f", h);

    return 0;
    
}
