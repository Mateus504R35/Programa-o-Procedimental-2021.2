#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 9
{
    int s, p;
    printf("Escreva seu salario:");
    scanf("%d", &s);
    printf("Escreva o valor da prestacao do emprestimo:");
    scanf("%d", &p);

    if (p > (0.20*s))
    {
        printf("Emprestimo n�o concedido");
    }
    else
    {
        printf("Emprestimo concedido");
    }

    return 0;
}