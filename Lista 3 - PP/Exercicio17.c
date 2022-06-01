#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 17
{
    int salario, aumento1996, aumento1997, ano, i;
    salario = 2000;
    aumento1997 = 0;
    aumento1996 = salario + (salario*0.015);
    printf("digite o ano atual: ");
    scanf("%d", &ano);

    for (i = 1997; i < ano; i++)
    {
        aumento1997++;
    }
    printf("O salario atual sera de: %d", aumento1996*aumento1997);

    return 0;
}

