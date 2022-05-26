#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 17
{
    int base_maior, base_menor, altura, a;
    printf("Escreva o valor da base maior, base menor e altura de um trapezio, respectivamente: ");
    scanf("%d %d %d", &base_maior, &base_menor, &altura);
    a = (base_maior + base_menor) * altura / 2;

    if ((base_maior == 0) || (base_menor == 0))
    {
        printf("Erro, base maior ou base menor nao podem ser 0");
    }
    else
    {
        printf("A area desse trapezio eh: %d", a);
    }
    
    return 0;
}
