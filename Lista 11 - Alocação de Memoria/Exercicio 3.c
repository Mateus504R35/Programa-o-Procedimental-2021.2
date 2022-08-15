#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, tam = 1500;
    p = (int*) calloc(tam, sizeof(int));

    int i, cont = 0;

    for(i = 0; i < tam; i++ )
    {
        printf("%d", p[i]);
        if(p[i] == 0)
            cont++;
    }    
    printf("\n");
    
    if(cont == 1500)
    printf("O array realmente contem 1500 valores inicializados com 0");

    else
    printf("O array não contem 1500 valores inicializados com 0");


    free(p);

    return 0;
}