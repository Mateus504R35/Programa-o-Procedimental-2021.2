#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 31
{
    int a, b, c;
    printf("Escreva um valor: ");
    scanf("%d", &a);
    b = a - 1;
    c = a + 1;
    printf("O antecessor desse valor é %d e seu sucessor é %d", b, c);
    
    return 0;

}