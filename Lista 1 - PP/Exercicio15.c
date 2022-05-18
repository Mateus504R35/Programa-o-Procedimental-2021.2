#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()  // exerc�cio 15
{
    float R, G, Pi;
    Pi = 3.141592;
    printf("Escreva um �ngulo em radianos: ");
    scanf("%f", &R);
    G = (R*180)/Pi;
    printf("A convers�o para graus �: %f", G);

    return 0;
}
