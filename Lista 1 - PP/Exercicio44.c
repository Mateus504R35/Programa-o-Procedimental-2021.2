#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 44
{
    float hd, hu;
    int d; 
    printf("Escreva a altura de um degrau: \n");
    scanf("%f", &hd);
    printf("Agora escreva a altura que deseja alcançar: \n");
    scanf("%f", &hu);
    d = hu/hd;
    printf("A quantidade de degraus que você deverá subir é: %d", d);

    return 0;
}
