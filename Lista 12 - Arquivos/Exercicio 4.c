#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *p;
    int cont, cont2, i;
    char nome[20];

    if((p = fopen("pessoas.txt","r")) == NULL)
    return -1;

    for (i = 0; fscanf(p, "%s", nome) != EOF; i++)
    {
        if(fscanf(p, "%s", nome) == ':')
        cont = i + 1;

        if(fscanf(p,"%s", nome) == '-')
        cont2 = i ;
    }

    for(i = cont; fscanf(p, "%s", nome) != EOF; i++)
    fprintf(stdout, "%c", nome[i]);
    
    fclose(p);

    return 0;
}