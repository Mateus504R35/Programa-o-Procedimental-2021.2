#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 32
{
    int a, b, c;
    printf("Escreva um valor: ");
    scanf("%d", &a);
    b = (a*3) + 1;
    c = (a*2) - 1;
    printf("A soma do sucessor do triplo desse valor com o antecessor de seu dobro é: %d", b+c);

    return 0;

}
