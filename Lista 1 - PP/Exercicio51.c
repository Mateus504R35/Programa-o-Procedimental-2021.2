#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 51
{
    float i1, i2, i3, vp;

    printf("Escreva, em porcentagem, quanto cada um investiu na aposta: ");
    scanf("%f %f %f", &i1, &i2, &i3);
    i1 = i1/100;
    i2 = i2/100;
    i3 = i3/100;

    printf("Agora escreva o valor do premio: ");
    scanf("%f", &vp);

    float vg1, vg2, vg3;

    vg1 = vp*i1;
    vg2 = vp*i2;
    vg3 = vp*i3;

    printf("O valor que cada um ganhou no premio foi de: %f, %f, %f", vg1, vg2, vg3);

    return 0;

}