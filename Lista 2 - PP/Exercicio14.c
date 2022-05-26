#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 14
{
    float tl, as, ef, med;
    printf("Escreva, reespectivamente, a nota do trabalho de laboratorio, avaliaçao semestral e do exame final:");
    scanf("%f %f %f", &tl, &as, &ef);
    med = (tl*2)+(as*3)+(ef*5)/3;

    if (med < 2.9)
    {
        printf("Voce foi reprovado -- media igual a: %.1f", med);
    }
    else
    {
        if ((med >= 3.0) && (med <= 4.9))
        {
            printf("Voce ficou de recuperacao -- media igual a: %.1f", med);
        }
        else
        {
            printf("Voce foi aprovado -- media igual a: %.1f", med);
        }
    }
    return 0;
}