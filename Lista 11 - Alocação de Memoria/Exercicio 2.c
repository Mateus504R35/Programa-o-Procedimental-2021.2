#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    printf("Escreva o tamanho de uma string: ");
    scanf("%d", &tamanho);

    char *p;
    int i;
    p = (char*) malloc((tamanho+1)*sizeof(char));


    for(i = 0; i < tamanho; i++)
    {
        fflush(stdin);
        printf("Escreva a %d letra: ", i+1);
        scanf("%c", &p[i]);
    }
    p[i] = '\0';

    printf("%s", p);

    free(p);

    return 0;
}