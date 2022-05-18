#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()  // exerc�cio 8
{
    float K, C; //declaracao das variaveis
    printf("Escreva a temperatura em graus Kelvin: ");      //mensagem para o usuario
    scanf("%f", &K);    //captura dos dados
    C = K-273.15;   // conversao de k para c
    printf("A convers�o dessa temperatura �: %f", C);   // impressao da variavel c

    return 0;
}

