#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 15
{
    int a;
    printf("Escreva um numero: ");
    scanf("%d", &a);

    switch (a)
    {
        case 1:
            printf("Domingo"); break;
        case 2: 
            printf("Segunda-Feira"); break;
        case 3:
            printf("Terça-Feira"); break;
        case 4:
            printf("Quarta-Feira"); break;
        case 5:
            printf("Quinta-Feira"); break;
        case 6:
            printf("Sexta-Feira"); break;
        case 7:
            printf("Sabado"); break;
        default:
            printf("Erro, nao é um numero valido");
    }

    return 0;
}