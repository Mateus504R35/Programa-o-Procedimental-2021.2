#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 47
{
    int num, linha1, linha2, linha3, linha4;
    printf("Escreva o número inteiro de 4 digitos:");
    scanf("%d", &num);
    printf("Esse numero escrito linha por linha: \n");
    linha1 = num / 1000;
    printf("%d \n", linha1);
    linha2 = (num % 1000)/100;
    printf("%d \n", linha2);
    linha3 = (num % 100)/10;
    printf("%d \n", linha3);
    linha4 = (num % 10)/1;
    printf("%d \n", linha4);

    return 0;
}
