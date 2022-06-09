#include <stdio.h>
#include <stdlib.h>

/* Questão 1: os identificadores corretos são: a) Moeda; e) main2; g) _Hello;
h) MAIS; j) b15; l) F1
*/

/*void main()      // exercicio 2
{
    int x, y;
    float x = 5.23;     // declaração de duas variaveis com mesmo nome (x)
    printf("%f", x);
}

void main ()
{
    int x = y = z = 0;  // atribuição em cascata não pode ser feita na mesma linha da declaração
    printf("%d %d %d", x, y, z);
}
*/

int main ()     // exercicio 3
{
    int salario, aumento;
    printf("Digite o valor do salario: ");
    scanf("%d", &salario);
    aumento = salario * 1.25;

    printf("Apos 25%% de aumento, o salario fica em %d", aumento);

    return 0;
}

int main () // exercicio 4
{
    char c;
    int temperatura, unidade, conversao;
    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);
    printf("Digite a unidade: ");
    scanf("%c", &c);

    switch (c)
    {
        case 'f':
        case 'F':   unidade = 2;
                    break;
        case 'c':
        case 'C':   unidade = 1;
                    break;

        default: printf("erro, a unidade digitada nao eh valida.");
        break;
    }
    if(unidade == 1)
    {
        conversao = temperatura * (9.0/5.0) + 32.0;
        printf("%d graus Celsius equivale a %d graus fahrenheit", temperatura, conversao);
    }
    if (unidade == 2)
    {
        conversao = 5/9 * (temperatura - 32.0);
        printf("%d graus fahrenheit equivale a %d graus celsius ", temperatura, conversao);

    }
    else
        printf("\n");


    return 0;
}

int main ()     // exercicio 5
{
    int i, j, ramo;
    printf("Escreva a quantidade de ramos: ");
    scanf("%d", &ramo);

    for(i = 0; i < ramo; i++)
    {
        for(j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

int main () // exercicio 6
{
    int op, v1, v2;

    do
    {
        do
        {
        printf("-- Calculadora Básica -- \n");
        printf("Escolha uma opçao: \n");
        printf("1. Adicao \n");
        printf("2. Subtracao \n");
        printf("3. Multiplicacao \n");
        printf("4. Divisao \n");
        printf("5. Módulo \n");
        printf("6. SAIR \n");
        printf("Opcao: ");
        scanf("%d", &op);
        }while((op < 1) || (op > 6))

        if(op != 6)
        {
            printf("Digite o primeiro valor:");
            scanf("%d", &v1);
            printf("Digite o segundo valor: ");
            scanf("%d", &v2);
        }

        switch(op)
        {
            case '1':   printf("%d + %d = %d\n", v1, v2, (v1+v2));
                break;
            case '2':
                break:  printf("%d - %d = %d\n", v1, v2, (v1-v2));
            case '3':
                break:  printf("%d x %d = %d\n", v1, v2, (v1*v2));
            case '4':
                break:  printf("%d / %d = %d\n", v1, v2, ((float)v1/v2));
            case '5':
                break:  printf("%d %% %d = %d\n", v1, v2, (v1%v2));
            case '6':
                break:  printf("Saindo da calculadora...");
        }

    }while(op != 6);

    return 0;
}



