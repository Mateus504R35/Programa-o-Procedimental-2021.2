#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, i;
    int *p;

    while (m >= 0)
    {
    printf("Escreva a quantidade de numeros a ser armazenado em um array: ");
    scanf("%d", &m);
    fflush(stdin);

    if(m < 0)
    {
        printf("Erro, numero negativo");
        printf("\n");
        system("pause");
        exit(1);
    }

    p = (int *) malloc(m*sizeof(int));

    if (p == NULL)
    {
        printf("Erro, falha na memoria");
        system("pause");
        exit(1);
    }


    for(i = 0; i < m; i++)
    {
        printf("Escreva o valor da posicao %d do array: ", i);
        scanf("%d", &p[i]);
    }

    printf("\n");

    for(i = 0; i < m; i++)
    printf("%d", p[i]);
    
    printf("\n");

    free(p);


    }
    

    return 0;
}