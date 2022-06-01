#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()     // exercicio 15
{
    char escolha;
    int v1, v2, operacao;

    do
    {
        printf(". Adiçao (opçao 1) \n");
        printf(". Subtraçao (opçao 2) \n");
        printf(". Multiplicaçao (opçao 3) \n");
        printf(". Divisao (opçao 4) \n");
        printf(". Saida (opçao 5) \n");
        printf("Escolha:   ");
        scanf("%c", &escolha);
        printf("\n");

        switch (escolha)
        {
        case '1':   
            printf("Digite dois valores: "); 
            scanf("%d %d", &v1, &v2); 
            operacao = v1 + v2;
            break;
        case '2':   
            printf("Digite dois valores: "); 
            scanf("%d %d", &v1, &v2); 
            operacao = v1 - v2;
            break;
        case '3':   
            printf("Digite dois valores: "); 
            scanf("%d %d", &v1, &v2); 
            operacao = v1 * v2;
            break;
        case '4':   
            printf("Digite dois valores: "); 
            scanf("%d %d", &v1, &v2); 
            operacao = v1 / v2;
            break;
        case '5':   
            printf("Saindo... \n"); 
            break;
        }

    } while ((escolha < 1) || (escolha < 5) || (escolha > 5));
    
    printf("FIM");

    return 0;
}