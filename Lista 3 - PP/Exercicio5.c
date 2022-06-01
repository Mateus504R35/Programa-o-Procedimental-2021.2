#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercico 5
{
    int a, b, c, i;
    b = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Escreva um numero:");
        scanf("%d", &a);
        b = b + a;
    }


    printf("\n a soma desses numeros e: %d", b);

    return 0;
}
