#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 49
{
    int hinic, minic, sinic, duracao;
    printf("Escreva a hora, minuto e segundo do inicio do experimento: ");
    scanf("%d %d %d", &hinic, &minic, &sinic);
    printf("Escreva a duração, em segundos, do experimetno: ");
    scanf("%d", &duracao);

    
    int h, m, s;
    h = duracao / 3600;
    m = ((h*3600)-duracao)/60;
    s = duracao - (h*3600) - (m*60);

    int hfin, mfin, sfin;
    hfin = hinic + h;
    mfin = minic + m;
    sfin = sinic + s;

    printf("\n A experiencia terá seu fim em: %d:%d:%d", hfin, mfin, sfin);

    return 0;

}