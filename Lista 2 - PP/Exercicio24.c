#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main ()     // exercicio 24
{
    int v;
    float p;
    char e;
    printf("digite o valor: ");
    scanf("%d", &v);
    printf("digite o estado: ");
    scanf("%c", e);

    switch (e)
    {
        case 'mg':
            p = v + (v*0.07);
            printf("O valor do produto eh: %.2f", p);
            break;
        case 'sp':
            p = v + (v*0.12);
            printf("O valor do produto eh: %.2f", p);            
            break;
        case 'rj':
            p = v + (v*0.15);
            printf("O valor do produto eh: %.2f", p);            
            break;
        case 'ms':
            p = v + (v*0.08);
            printf("O valor do produto eh: %.2f", p);            
            break;
        default:
            printf("erro, o estado digitado nao eh valido.");
    }

    return 0;
}
