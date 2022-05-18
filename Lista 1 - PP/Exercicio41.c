#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 41
{
    float vh, nh, vp;
    printf("Escreva o valor da hora de trabalho em reais e o numero de horas trabalhadas: ");
    scanf("%f %f", &vh, &nh);
    vp = vh*nh;
    printf("O valor a ser pago com 10%% de aumento é: %.2f", vp+(vp*0.10));

    return 0;
}