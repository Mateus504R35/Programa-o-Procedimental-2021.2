#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 40
{
    int d;
    float sp, sl, sld;
    printf("Escreva a quantidade de dias trabalhados pelo encanador: ");
    scanf("%d", &d);
    sp = 30.00;
    sl = sp*d;
    sld = sl - (sl*0.08);
    printf("A quantia liquida a ser paga para o trabalhador com o desconto do imposto de renda é: %.2f", sld);

    return 0;

}
