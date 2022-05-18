#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()  // exercicio 5
{
    float x, y; // declaração das variaveis
    printf("Escreva um valor:");    // mensagem para o usuario
    scanf("%f", &x); // leitura dos dados
    y = x/5;    // atribuição da variavel y
    printf("A quinta parte desse valor �: %f", y);  // impressao da variavel y

    return 0;

}