#include <stdio.h>
#include <stdlib.h>
#define N 2

struct tipoNodo
{
    int RA;
    char nomeAluno[10];
    float media;
};

typedef struct tipoNodo tipoNodo;

int menu();
int inserirInicio(tipoNodo LL[], int IA, int FA, int *IL, int *FL,
tipoNodo infoNodo);
int mostrarDados(tipoNodo LL[], int IA, int FA, int IL, int FL);

int main()
{
    tipoNodo LL[N], infoNodo;
    int IA=0, FA=N-1, IL=-1, FL=-1, opcao;
    do
    {
        //system("clear");
        opcao = menu();
        switch (opcao)
        {
        case 1:
            printf("....Inserindo no início....\n");
            printf("\nInforme os dados: ");
            printf("RA: ");
            scanf("%d",&infoNodo.RA);
            printf("Nome: ");
            scanf("%s",infoNodo.nomeAluno);
            printf("Média: ");
            scanf("%f",&infoNodo.media);
            if(!inserirInicio(LL, IA, FA, &IL, &FL, infoNodo))
                printf("Inserido com sucesso!!!\n");
            else    
                printf("Não foi possível inserir. Lista cheia!!!\n");
            break;
        case 2:
            printf("....Mostrando....\n");
            mostrarDados(LL, IA, FA, IL, FL);
            break;
        case 0:
            printf("....Já vai tarde!!!....\n");
            break;
        default:
            printf("....Errou, animal!!!....\n");
        }
    } while (opcao != 0);
}

int menu()
{
    int opcao;
    printf("::::::::: M E N U :::::::::\n");
    printf("[1] Inserir no Início\n");
    printf("[2] Mostrar\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int inserirInicio(tipoNodo LL[], int IA, int FA, int *IL, int *FL,
tipoNodo infoNodo)
{
    if (IA == *IL && FA == *FL)
        return 1; //deu erro - lista cheia!!
    else 
    {
        if (*IL == -1)     //LL vazio
            *IL = *FL = IA;
        else if (*IL > IA)  //Se tiver espaço
            *IL = *IL-1;                  //no início da lista
        else 
        {
            for(int i = *FL; i >= *IL; i--)       
                LL[i+1] = LL[i];
            *FL = *FL+1;
        }
        LL[*IL] = infoNodo;
        return 0;
    }
}

int mostrarDados(tipoNodo LL[], int IA, int FA, int IL, int FL){
    for(int i=IA; i<=FA; i++){
        if(i>=IL && i<=FL)
            printf("%4d - %4.1f - %s\n",LL[i].RA, LL[i].media, LL[i].nomeAluno);
        else
            printf(" --- \n");
    }
    return 0;
}
