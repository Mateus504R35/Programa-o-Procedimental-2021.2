#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()   // exercicio 1
{
    int a, b;
    printf("Escreva dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("O primeiro n�mero � o maior");
    }
    else
    {
      printf("O segundo n�mero � o maior");
    }

    return 0;

}

