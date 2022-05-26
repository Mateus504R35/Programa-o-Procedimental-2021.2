#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()     // exercicio 36
{
    int valor_venda, comissao;
    printf("escreva o valor da venda: ");
    scanf("%d", &valor_venda);

    if(valor_venda >= 100000)
    {
        comissao = 700 + (valor_venda*0.16);
    }
    else
    {
        if((valor_venda < 100000) && (valor_venda >= 80000))
        {
            comissao = 650 + (valor_venda*0.14);
        }
        else
        {
            if((valor_venda < 80000) && (valor_venda >= 60000))
            {
                comissao = 600 + (valor_venda*0.14);
            }
            else
            {
                if((valor_venda < 60000) && (valor_venda >= 40000))
                {
                    comissao = 550 + (valor_venda*0.14);
                }
                else
                {
                    if((valor_venda < 40000) && (valor_venda >= 20000))
                    {
                    comissao = 500 + (valor_venda*0.14);
                    }
                    else
                    {
                        comissao = 400 + (valor_venda*0.14);
                    }

                }
            }
        }
    }

    printf("comissao = %d", comissao);

    return 0;
}
