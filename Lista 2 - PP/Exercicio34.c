#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 34
{
    int nota, falta;
    printf("Escreva a nota e a quantidade de faltas: ");
    scanf("%d", &nota, &falta);

    if (((nota >= 9) && (nota <= 10)) && (falta <= 20))
    {
        printf("conceito = A");
    }
    else
    {
        if (((nota >= 9) && (nota <= 10)) && (falta >= 20))
        {       
            printf("conceito = B");
        }
        else
        {
            if (((nota >= 7.5) && (nota <= 8.9)) && (falta <= 20))
            {       
                printf("conceito = B");
            }
            else
            {
                if (((nota >= 7.5) && (nota <= 8.9)) && (falta >= 20))
                {       
                    printf("conceito = C");
                }
                else
                {
                    if (((nota >= 5.0) && (nota <= 7.4)) && (falta <= 20))
                    {       
                        printf("conceito = C");
                    }
                    else
                    {
                         if (((nota >= 5.0) && (nota <= 7.4)) && (falta >= 20))
                        {       
                            printf("conceito = D");
                        }
                        else
                        {
                            if (((nota >= 4.0) && (nota <= 4.9)) && (falta <= 20))
                            {       
                                printf("conceito = D");
                            }
                            else
                            {
                                if (((nota >= 4.0) && (nota <= 4.9)) && (falta >= 20))
                                {       
                                    printf("conceito = E");
                                }
                                else
                                {
                                    if (((nota >= 0.0) && (nota <= 3.9)) && (falta <= 20))
                                    {       
                                        printf("conceito = E");
                                    }
                                    else
                                    {
                                        printf("conceito = E");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }


    return 0;
}
