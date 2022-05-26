#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 28
{
    int a, b, c, d, e, f, g;
    char ch;
    printf("Escreva 3 valores inteiros positivos: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Agora digite para media: \n");
    fflush (stdin);
    printf("(a) geometrica ; (b) ponderada ; (c) harmonica ; (d) aritimetica \n");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
            d = cbrt (a*b*c);
            printf ("media = %d", d);
            break;
        case 'b':
            e = ((1*a)+(2*b)+(3*c))/3;
            printf("media = %d", e);
            break;
        case 'c':
            f = 1/((1/a)+(1/b)+(1/c));
            printf("media = %d", f);
            break;
        case 'd':
            g = (a+b+c)/3;
            printf("media = %d", g);
            break;
        default:
            printf("erro");
    }

    return 0; 
}