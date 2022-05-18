#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() // exerc�cio 7
{
    float F, C;     // declaração das variaveis
    printf("Escreva a temperatura em graus Fehreinheit: "); // mensagem para o usuario
    scanf("%f", &F); // captura dos dados
    C = 5.0*(F - 32.0)/9.0; // conversao da variavel c para f
    printf("A convers�o dessa temperatura �: %f", C);   // impressao da variavel f

    return 0;
}
