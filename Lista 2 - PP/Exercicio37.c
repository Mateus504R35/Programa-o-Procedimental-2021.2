#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()     // exercicio 37
{
    int tempo;
    printf("escreva o tempo permanecido no estacionamento em minutos: ");
    scanf("%d", &tempo);

    if (tempo <= 60)
    {
        printf("o valor a ser pago sera de 1 real");
    }
    else
    {
        if ((tempo > 60) && (tempo <= 120))
        {
            printf("o valor a ser pago sera de 2 reais");
        }
        else
        {
            if ((tempo > 120) && (tempo <= 180))
            {
                printf("o valor a ser pago sera de 3,40");
            }
            else
            {
                if ((tempo > 180) && (tempo <= 240))
                {
                    printf("o valor a ser pago sera de 4,80");
                }
                else
                {
                    printf("o valor a ser pago sera de 6,80");   
                }
                
            }
            
        }
        
    }



    return 0;
}
