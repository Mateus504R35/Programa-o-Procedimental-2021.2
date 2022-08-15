#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    int i, cont = 0;
    char c, car;
    arq = fopen("caracteres.txt","r");

    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    printf("Escreva um caractere: ");
    c = getchar();

    for(i = 0; car != EOF; i++)
    {
        car = fgetc(arq);
        if(car == c)
            cont++;
    }
    printf("Ele aparece %d vezes no arquivo. ", cont);

    fclose(arq);

    return 0;
}
