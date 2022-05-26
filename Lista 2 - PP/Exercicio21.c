#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () // exercicio 21
{
    int e, a, b;
    printf("Escolha uma opcao: \n");
    printf("1 - soma de 2 numeros \n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor) \n"); 
    printf("3 - Produto entre 2 numeros \n");
    printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero). \n"); 
    scanf("%d", &e);     

    switch (e)
    {
        case 1:
            printf("escreva dois numeros: ");
            scanf("%d %d", &a, &b);
            printf("a soma deles eh: %d", a+b);
            break; 
        case 2: 
            printf("escreva dois numeros (do maior para o menor em sequencia): ");
            scanf("%d %d", &a, &b);
            printf("a diferenca do maior pelo menor eh: %d", a-b);
            break;
        case 3: 
            printf("escreva dois numeros: ");
            scanf("%d %d", &a, &b);
            printf("o produto deles eh: %d", a*b);
            break;
        case 4: 
            printf("escreva dois numeros: ");
            scanf("%d %d", &a, &b);
            printf("a divisao deles eh: %d", a/b);
            break;
        default: 
            printf("erro, nao foi digitado um numero valido");
    }

    return 0;         
}