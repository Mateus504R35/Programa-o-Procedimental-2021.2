#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 45
{
    int x = 32;
    char ch, cmin;
    printf("Escreva uma letra maiuscula: ");
    scanf("%c", &ch);
    cmin = ch + x;
    printf("A letra %c em minusculo é: %c", ch, cmin);

    return 0;
}
