#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()  // exercicio 4
{
    float x, soma;  // declaração das variaveis
    printf("Escreva um valor:");    // mensagem para o usuario
    scanf("%f", &x);    // leitura dos dados
    soma = (x * x); // atribuição da variavel soma
    printf("O quadrado desse valor é: %.1f", soma); // impressão da variavel soma

    return 0;
}