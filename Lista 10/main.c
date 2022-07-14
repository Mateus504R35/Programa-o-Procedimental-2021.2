#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int a = 50, *p1;
    float b = 10.5, *p2;
    char c = 'R', *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Antes da modificacao: %d %.2f %c \n", a, b, c);

    *p1 = *p1 + 2;
    *p2 = *p2 + 52.4;
    *p3 = *p3 + 2;

    printf("Depois da modificacão: %d %.2f %c \n", *p1, *p2, *p3);

    return 0;
}

int main()
{
    int a, b, *p, *p2;
    printf("Escreva dois valores: ");
    scanf("%d %d", &a, &b);

    p = &a;
    p2 = &b;

    if (p > p2){
    printf("O maior endereco eh %d e seu conteudo eh %d", p, *p);
    }

    else{
    printf("O maior endereco eh %d e seu conteudo eh %d", p2, *p2);
    }

    return 0;
}

int main ()
{
    float array[10], *p;
    int i;

    p = array;

    for(i = 0; i < 10; i++)
    {
            printf("o endereco da posicao %d eh %d \n", i, ((p)+i));
    }


    return 0;
}
*/
int main ()
{
    float matriz[3][3], *p;
    int i, j;

    p = matriz;

    for ( i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            printf("o endereco da linha %d coluna %d eh %d \n", i+1, j+1, p+i+j);



    return 0;
}
