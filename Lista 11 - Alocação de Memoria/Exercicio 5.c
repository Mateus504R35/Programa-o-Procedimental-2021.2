#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datanascimento{
    int dia;
    int mes;
    int ano;
};
struct cadastro{
    int matricula;
    char sobrenome[10];
    struct datanascimento nascimento;
};

typedef struct cadastro cadastro;
typedef struct datanascimento datanascimento;
int main()
{
    int numeroalunos, i;
    cadastro *cad;

    printf("Escreva a quantidade de alunos a serem cadstrados: ");
    scanf("%d", &numeroalunos);

    cad = (cadastro*) malloc(numeroalunos*sizeof(cadastro));

    for(i = 0; i < numeroalunos; i++)
    {
        printf("Escreva o numero de matricula do aluno %d: ", (i+1));
        scanf("%d", &cad[i].matricula);
        fflush(stdin);
        printf("Agora escreva o sobrenome do aluno %d: ", (i+1));
        gets(cad[i].sobrenome);
        printf("Agora escreva a data de nascimento do aluno %d: ", (i+1));
        scanf("%d %d %d", &cad[i].nascimento.dia, &cad[i].nascimento.mes, &cad[i].nascimento.ano);
    }

    for(i = 0; i < numeroalunos; i++)
    {
        printf("O numero de matricula do aluno %d: %d \n", (i+1), cad[i].matricula);
        printf("O sobrenome do aluno %d: %s \n", (i+1), cad[i].sobrenome);
        printf("A data de nascimento do aluno %d: %d %d %d \n", (i+1), cad[i].nascimento.dia, cad[i].nascimento.mes, cad[i].nascimento.ano);
    }

    free(cad);

    return 0;
}