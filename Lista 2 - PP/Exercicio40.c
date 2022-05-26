#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()     // exercicio 40
{
    int peso, altura, imc;
    printf("escreva seu peso: ");
    scanf("%d", &peso);
    printf("escreva sua altura: ");
    scanf("%d", &altura);

    imc = peso/(altura*altura);

    if (imc < 18,5)
    {
        printf("Abaixo do peso");
    }
    else
    {
        if ((imc >= 18,5) && (imc <= 24,9))
        {
            printf("Saudavel");
        }
        else
        {
            if ((imc >= 25) && (imc <= 29,9))
            {
                printf("Peso em excesso");
            }
            else
            {
                if ((imc >= 30) && (imc <= 34.9))
                {
                    printf("Obesidade grau I");
                }
                else
                {
                    if ((imc >= 35.0) && (imc <= 39.9))
                    {
                        printf("Obesidade grau II (severa)");
                    }
                    else
                    {
                        printf("Obesidade grau III (morbida)");
                    }
                }
            }
        }

    }



    return 0;
}