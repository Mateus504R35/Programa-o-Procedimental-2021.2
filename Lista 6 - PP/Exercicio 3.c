#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    char nome[10];
    int n1, n2, n3;
};

typedef struct aluno aluno;

int main()
{
    aluno alunos[5];
    int i, maior = 0, maiornota, mediag[5], maiormediag = 0, maiormediagpos, menormediag = 0, menormediagpos;
    char aprovacao[5];

    for(i = 0; i < 5; i++)
    {
        printf("Escreva o numero de matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        printf("Agora escreva o nome do aluno %d: ", i+1);
        gets(alunos[i].nome);
        fflush(stdin);
        printf("Escreva a nota das 3 provas do aluno %d: ", i+1);
        scanf("%d %d %d", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
        mediag[i] = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
        
        if(mediag[i] >= 6)
        aprovacao[i] = 's';
        else
        aprovacao[i] = 'n';

        printf("\n");
    }

    for(i = 0; i < 5; i++)
    {
        if(alunos[i].n1 > maior)
        {
            maior = alunos[i].n1;
            maiornota = i+1;
        }
    }

    for(i = 0; i < 5; i++)
    {
        if(mediag[i] > maiormediag)
        {
            maiormediag = mediag[i];
            menormediag = maiormediag;
            maiormediagpos = i+1;
        }
        if(mediag[i] < menormediag)
        {
            menormediag = mediag[i];
            menormediagpos = i+1;
        }
    }

    printf("O aluno com a maior nota na primeira prova foi o aluno %d com nota %d\n", maiornota, maior);
    printf("O aluno com a maior media geral foi o aluno %d com media geral %d\n", maiormediagpos, maiormediag);
    printf("O aluno com menor media geral foi o aluno %d com media geral %d\n", menormediagpos, menormediag);

    for(i = 0; i < 5; i++)
    {
        if(aprovacao[i] = 's')
        printf("O aluno %d foi aprovado\n", i+1);
        if(aprovacao[i] = 'n')
        printf("O aluno %d foi reprovado\n", i+1);
    }

    return 0;
}