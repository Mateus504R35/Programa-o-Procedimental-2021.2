#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()  // exerc�cio 9
{
    float C, K;     // declaracao das variaveis
    printf("Escreva a temperatura em graus Celsius: ");     // mensagem para o usuario
    scanf("%f", &C);    // captura dos dados
    K = C + 273.15; //conversao da variavel C para K
    printf("A convers�o dessa temperatura �: %f", K);   //impressão da variavel K

    return 0;
}

