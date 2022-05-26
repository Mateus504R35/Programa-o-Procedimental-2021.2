#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 35
{
    int dia, mes;
    printf("escreva um mes em numero: ");
    scanf("%d", &mes);
    printf("agora escreva um dia desse mes")
    scanf("%d", &dia);

    if ((mes <= 12) && (dia <= 31))
    {
        printf("é uma data valida");
    }
    else
    {
        printf("nao é uma data valida");
    }
    
    return 0;
}
