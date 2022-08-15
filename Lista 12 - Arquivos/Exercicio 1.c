#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char car;
    fp = fopen("caracteres.txt","w+");

    if(fp == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }
        do
        {
            printf("Escreva um caractere a ser adicionado no arquivo: ");
            car = getchar();
            fflush(stdin);
            fputc(car, fp);
        }while(car != '0');

        fclose(fp);

    return 0;
}
