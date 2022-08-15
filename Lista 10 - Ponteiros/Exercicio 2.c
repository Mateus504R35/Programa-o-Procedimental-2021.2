#include <stdio.h>
#include <stdlib.h>

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
