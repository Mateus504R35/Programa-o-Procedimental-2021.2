#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 18 
{
    float a, b;
    char ch;
    printf("___________________________________ \n");
    printf("| Digite:                          |\n");
    printf("| 's' - realizar uma soma          | \n");
    printf("| 'b' - realizar uma subtracao     |\n");
    printf("| 'm' - realizar uma multiplicacao | \n");
    printf("| 'd' - realizar uma divisao       | \n");
    printf("|__________________________________| \n");
    ch = getchar();

    switch (ch)
    {
        case 's':
            printf ("Escreva dois numeros: ");
            scanf("%f %f", &a, &b);
            printf("A soma deles eh: %.1f", a+b);
            break;
        case 'b':
            printf ("Escreva dois numeros: ");
            scanf("%f %f", &a, &b);
            printf("A subtracao do primeiro pelo segundo eh: %.2f", a-b);
            break;
        case 'm':
            printf ("Escreva dois numeros: ");
            scanf("%f %f", &a, &b);
            printf("A multiplicacao deles eh: %.1f", a*b);
            break;
        case 'd':
            printf ("Escreva dois numeros: ");
            scanf("%f %f", &a, &b);
            printf("A divisao do primeiro pelo segundo eh: %.2f", a/b);
            break;                                
        default:
            printf("Erro, a letra digitada nao corresponde a nenhum comando.");
    }

    return 0;
}
