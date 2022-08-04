#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arq;
    char nome[10], pessoa[] = "Uma pessoa é formada por:";
    char c = '-';
    int idade, altura;
    arq = fopen("pessoas.txt","w+");

    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    printf("Escreva o nome de uma pessoa: ");
    gets(nome);
    fflush(stdin);
    printf("Escreva a idade de uma pessoa: ");
    scanf("%d", &idade);
    printf("Escreva a altura de uma pessoa: ");
    scanf("%d", &altura);

    fputs(pessoa, arq);
    fputs(nome, arq);
    fputc(c, arq);
    fprintf(arq, "%d", idade);
    fputc(c, arq);
    fprintf(arq, "%d", altura);

    fclose(arq);

    return 0;
}
