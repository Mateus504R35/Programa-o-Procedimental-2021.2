#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() // exercicio 6
{
    float C, F; // declaração das variaveis
    printf("Escreva a temperatura em graus Celsius: "); // mensagem para o usuario
    scanf("%f", &C); // captura dos dados 
    F = C*(9.0/5.0)+32.0;   // conversão dos valores de C para F
    printf("A convers�o dessa temperatura �: %f", F);   // impressao da variavel F

    return 0;
}