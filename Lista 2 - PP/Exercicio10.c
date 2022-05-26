#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 10
{
    float h;
    char s;
    printf("Escreva a altura em metros: ");
    scanf("%f", &h);
    printf("Agora escreva H se for homem ou M se for mulher: ");
    scanf("%ch", &s);

    if ((s == 'H') || (s == 'h'))
    {
        float peso;
        peso = (72.7*h) - 58.0;
        printf("Seu peso ideal �: %.2f", peso);
    }
    else
    {
        float peso;
        peso = (62.1*h) - 44.7;
        printf("Seu peso ideal �: %.2f", peso);
    }

    return 0;
}
