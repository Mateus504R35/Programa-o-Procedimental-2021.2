#include <stdio.h>
#include <stdlib.h>

struct nascimento{
    int dia, mes, ano;
};

struct dados{
    char nome[10], cargo[30];
    int idade, cpf, codigosetor, salario;
    char sexo;
    struct nascimento data;
};

typedef struct dados dados;

int main()
{
    dados funcionario[3];
    int i;

    for(i = 0; i < 3; i ++)
    {
        printf("digite o nome do funcionario %d: ", i+1);
        gets(funcionario[i].nome);
        printf("Escreva a idade do funcionario %d: ", i+1);
        scanf("%d", &funcionario[i].idade);
        fflush(stdin);
        printf("Sexo do funcionario %d('m' masculino, 'f' feminino): ", i+1);
        funcionario[i].sexo = getchar();
        printf("CPF do funcionario %d: ", i+1);
        scanf("%d", &funcionario[i].cpf);
        printf("Data de nascimento do funcionario %d: ", i+1);
        scanf("%d %d %d", &funcionario[i].data.dia, &funcionario[i].data.mes, &funcionario[i].data.ano);
        printf("Codigo do setor do funcionario %d(0-99): ", i+1);
        scanf("%d", &funcionario[i].codigosetor);
        fflush(stdin);
        printf("Cargo do funcionario %d: ", i+1);
        gets(funcionario[i].cargo);
        printf("Salario do funcionario %d: ", i+1);
        scanf("%d", &funcionario[i].salario);
        fflush(stdin);
        printf("\n");
    }
    for(i = 0; i < 3; i++)
    {
        printf("Os dados do funcionario %d sao: \n", i+1);
        printf("Nome: %s\n", funcionario[i].nome);
        printf("Idade: %d\n", funcionario[i].idade);
        printf("Sexo: %c\n", funcionario[i].sexo);
        printf("CPF: %d\n", funcionario[i].cpf);
        printf("Data de nascimento: %d %d %d\n", funcionario[i].data.dia, funcionario[i].data.mes, funcionario[i].data.ano);
        printf("Codigo do setor: %d\n", funcionario[i].codigosetor);
        printf("Cargo: %s\n", funcionario[i].cargo);
        printf("Salario: %d\n", funcionario[i].salario);
        printf("\n");
    }


    return 0;
}