#include <stdio.h>
#include <stdlib.h>

struct carro{
    char marca[15];
    int ano, preco;
};

typedef struct carro carro;

int main()
{
    int p, i;
    carro carros[5];

    for(i = 0; i < 5; i++)
    {
        printf("Digite a marca do carro %d: ", i+1);
        gets(carros[i].marca);
        fflush(stdin);
        printf("Escreva o ano do carro %d: ", 1+1);
        scanf("%d", &carros[i].ano);
        fflush(stdin);
        printf("Escreva o preco do carro %d: ", i+1);
        scanf("%d", &carros[i].preco);
        fflush(stdin);
        printf("\n");
    }
    do{
        printf("Escreva um valor: ");
        scanf("%d", &p);
        if(p == 0)
        break;

        for (i = 0; i < 5; i++)
        {
            if(carros[i].preco < p)
            {
                printf("Informacoes de um carro com preco menor do que o valor digitado: \n");
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preco: %d\n", carros[i].preco);
                printf("\n")
            }
        }
    }while(p != 0);

    return 0;
}