#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 50
{
    int idade, ano, anonasc;
    printf("Escreva sua idade: ");
    scanf("%d", &idade);
    printf("Agora escreva o ano atual: ");
    scanf("%d", &ano);

    anonasc = ano - idade;
    printf("Seu ano de nascimento é: %d", anonasc);

    return 0;

}