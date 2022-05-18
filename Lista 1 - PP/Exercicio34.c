#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 34
{
    float r, pi, a;
    printf("Escreva o raio de um circulo: ");
    scanf("%f", &r);
    pi = 3.141592;
    a = pi*(r*r);
    printf("A area do circulo é: %f", a);

    return 0;
}
