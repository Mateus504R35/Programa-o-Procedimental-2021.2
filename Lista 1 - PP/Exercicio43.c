#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 43
{
    float v, valor_desc, valor_parc, comiss_vist, comiss_parc;
    printf("Escreva um valor: ");
    scanf("%f", &v);
    valor_desc = v - (v*0.10);
    valor_parc = valor_desc*0.03;
    comiss_vist = valor_desc*0.05;
    comiss_parc = v*0.05;
    printf("O total a pagar com desconto de 10%% é: %.2f \n", valor_desc);
    printf("O valor de cada parcela de 3%% sem juros: %.2f \n", valor_parc);
    printf("A comissão do vendedor em venda a vista: %.2f \n", comiss_vist);
    printf("A comissão do vendedor em venda parcelada: %.2f \n", comiss_parc);

    return 0;
}
