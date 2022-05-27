#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int main()      // exercicio 1
{
    int a, b, i;

    for (i = 0; i < 5; i++)
    {
        a = 1 + i;
        b = 3 * a;
        printf("%d \n", b);
    }

    return 0;
}

int main ()     // exercicio 2
{
    int a, b, c, i;

    for (i = 1; i <= 100; i++)
    {
        printf("%d \n", i);
    }

    i = 1;
    while (i <= 100)
    {
        printf("%d \n", i);
        i++;
    }

    i = 1;
    do
    {
        printf("%d \n", i);
        i++;
    }while(i <= 100);

    return 0;
}

int main ()     // exercicio 3
{
    int i = 10;

    while (i >= 0)
    {
        printf("%d \n", i);
        i--;
        if (i < 0)
        {
            printf("FIM!");
        }

    }

    return 0;
}

int main ()     // exercicio 4
{
    int i;

    for (i = 0; i <= 100000; i = i + 1000)
    {
        printf("%d \n", i);
    }

    return 0;
}

int main ()     // exercico 5
{
    int a, b, c, i;
    b = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Escreva um numero:");
        scanf("%d", &a);
        b = b + a;
    }


    printf("\n a soma desses numeros e: %d", b);

    return 0;
}

int main ()     // exercicio 6
{
    int i;
    float a, b, m;
    b = 0;

    for (i = 0; i <= 9; i++)
    {
        printf("DIGITE UM VALOR: ");
        scanf("%f", &a);
        b = b + a;
    }
    m = b / i;
    printf(" A MEDIA DESSES VALORES E: %.1f", m);


    return 0;
}

int main ()     // exercicio 7
{
    int i;
    float a, b, c, m;
    b = 0;

    for (i = 0; i <= 9; i++)
    {
        printf("ESCREVA UM VALOR: ");
        scanf("%f", &a);
        b = b + a;
        if (a < 0)
        {
            b = b - a;
        }
        else
        {
            c++;
        }
    }
    m = b / c;
    printf("A MEDIA DESSES VALORES, IGNORANDO OS POSITIVOS E: %.1f", m);

    return 0;
}

int main ()     // exercicio 8
{
    int numero, maior, menor, i;
    maior = 0;
    menor = 0;

    for (i = 0; i <= 9; i++)
    {
        printf("ESCREVA UM VALOR: ");
        scanf("%d", &numero);

        if(i != 0)
        {
            if(numero < menor)
            {
                menor = numero;
            }
            if(numero > maior)
            {
                maior = numero;
            }
        }
        else
        {
            maior = menor = numero;
        }

    }
    printf("O MAIOR NUMERO -- %d\n  E O MENOR -- %d", maior, menor);


    return 0;
}
*/
int main () // exercicio 9
{
    int i, numero, contador, impar;
    contador = 1;
    printf("ESCREVA UM NUMERO: ");
    scanf("%d", &numero);

    for (i = 0; i <= 2*numero; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}







