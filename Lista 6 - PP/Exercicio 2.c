#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[10];
    int matricula;
    char curso[10];
};

typedef struct aluno aluno;

int main()
{
    aluno alunos[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("digite o nome do aluno %d: ", i+1);
        gets(alunos[i].nome);
        printf("digite o numero de matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        printf("escreva o nome do curso do aluno %d: ", i+1);
        gets(alunos[i].curso);
        printf("\n");
    }
    
    for(i = 0; i < 5; i++)
    {
        printf("dados do aluno %d :", i+1);
        printf("nome: %s\n", alunos[i].nome);
        printf("matricula: %d\n", alunos[i].matricula);
        printf("curso: %s\n", alunos[i].curso);
        printf("\n");
    }

    return 0;
}