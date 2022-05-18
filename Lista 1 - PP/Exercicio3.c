#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()  // exercicio 3
{
    int x, y, z, soma;  // declaração das variaveis
    printf("Escreva tr�s valores inteiros:");   // mensagem para o usuario
    scanf("%d %d %d", &x, &y, &z);  // leitura dos dados
    soma = x + y + z;   // atribuição da variavel soma
    printf("A soma dos valores s�o: %d", soma); // impressão da variavel soma

    return 0;
}
