#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 13
{
    int a, b, c, m;
    printf("Escreva a nota das 3 provas: ");
    scanf("%d %d %d", &a, &b, &c);

    m = (a*1)+(b*1)+(c*3)/3;

    if (m < 60)
    {
        printf("Você foi reprovado: media igual a %d", m);
    }
    else
    {
        printf("Você foi aprovado: media igual a %d", m);
    }

    return 0;
}