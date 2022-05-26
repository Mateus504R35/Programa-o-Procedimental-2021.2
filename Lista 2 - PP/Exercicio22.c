#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () // exercicio 22
{
    int id, ts;
    printf("escreva a idade e o tempo de servico: ");
    scanf("%d %d", &id, &ts);

    if ((id >= 65) || (ts >= 30) || ((id >= 60) && (ts >= 25)))
    {
        printf("Voce pode se aposentar");
    }
    else
    {
        printf("Voce nao pode se aposentar");
    }

    return 0;
}
