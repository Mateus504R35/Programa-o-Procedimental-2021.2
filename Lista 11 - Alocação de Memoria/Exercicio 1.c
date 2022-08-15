#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    printf("Escreva o tamanho do array a ser lido: ");
    scanf("%d", &tamanho);

    int *p;
    int i;
    p = (int *) malloc (tamanho*sizeof(int));

    for(i = 0; i < tamanho; i++)
    {
        printf("Preencha a posicao %d do array: ", i+1);
        scanf("%d", &p[i]);
    }
    printf("\n");

    for(i = 0; i < tamanho; i++)
        printf("O array na posicao %d eh %d \n", (i+1), p[i]);

    free(p);

    return 0;
}