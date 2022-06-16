#include <stdio.h>
#include <stdlib.h>


int main()  // exercicio 1
{
    int i = 0, soma, vetor[6] = {1, 0, 5, -2, -5, 7};
    soma = vetor[0] + vetor[1] + vetor[5];
    vetor[4] = 100;

    while(i < 6)
    {
        printf("%d \n", vetor[i]);
        i++;
    }


    return 0;
}
