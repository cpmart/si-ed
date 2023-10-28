#include <stdio.h>

struct Dados
{
    int codigo;
    short idade;
    char nome[10];
    float altura;
};

void imprimir(struct Dados aluno[]);

int main()
{
    struct Dados alunos[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Código: ");
        scanf("%d", &alunos[i].codigo);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Idade: ");
        scanf("%hd", &alunos[i].idade);
        printf("Altura: ");
        scanf("%f", &alunos[i].altura);
    }
    imprimir(alunos);
}

void imprimir(struct Dados alunos[])
{
    printf("------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Código:  %d\n", alunos[i].codigo);
        printf("Nome..:  %s\n", alunos[i].nome);
        printf("Idade.: %hd\n", alunos[i].idade);
        printf("Altura:  %g\n", alunos[i].altura);
    }
}