#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 39
{
    float p, s, t;
    p = 780000.00*0.46;
    s = p*0.32;
    t = 780000.00-p-s;
    printf("O valor ganho por cada ganhador é: %.2f para o primeiro, %.2f para o segundo e %.2f para o terceiro: ", p, s, t);

    return 0;
}