#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 52
{
    int c, l, pm, cus;
    printf("Escreva o comprimento e a largura esse terreno: ");
    scanf("%d %d", &c, &l);
    printf("Agora escreva o preço do metro de tela: ");
    scanf("%d", &pm);

    cus = (c*l)*pm;

    printf("O custo para cercar esse terreno é de: %d", cus);

    return 0;
}