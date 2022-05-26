#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 38
{
    int valor_salario, tempo_servico, reajuste;
    printf("Escreva o valor do salario e o tempo de servico em anos: ");
    scanf("%d %d", &valor_salario, &tempo_servico);

    if ((valor_salario <= 500) && (tempo_servico <= 1))
    {
        reajuste = valor_salario + (valor_salario*0.25) + 00;
    }
    else
    {
        if ((valor_salario <= 1000) && ((tempo_servico >= 1) && (tempo_servico <= 3)))
        {   
            reajuste = valor_salario + (valor_salario*0.20) + 100;
        }
        else
        {
            if ((valor_salario <= 1500) && ((tempo_servico >= 4) && (tempo_servico <= 6)))
            {   
                reajuste = valor_salario + (valor_salario*0.15) + 200;
            }
            else
            {
                if ((valor_salario <= 2000) && ((tempo_servico >= 7) && (tempo_servico <= 10)))
                {   
                    reajuste = valor_salario + (valor_salario*0.10) + 300;
                }
                else
                {
                    reajuste = valor_salario + 500;
                }
            }
        }
    
    }
    
    printf("o valor do reajuste sera de = %d", reajuste);


    return 0;
}
