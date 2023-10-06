#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3

int main()
{
    int matriz[L][C], totalLinha = 0, vetor[C] = {};
    srand(time(NULL));
    // Preenchendo a matriz
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = rand() % 16;
        }
    }
    // Mostrando a matriz e o total por linha
    for (int i = 0; i < L; i++)
    {
        totalLinha = 0;
        for (int j = 0; j < C; j++)
        {
            printf("  %2d", matriz[i][j]);
            totalLinha += matriz[i][j];
            vetor[j] += matriz[i][j];
        }
        printf("  =>  %2d", totalLinha);
        printf("\n");
    }
    printf("----------------------\n");
    // Mostrando total por linha da matriz
    for (int j = 0; j < C; j++)
    {
        printf("  %2d", vetor[j]);
    }
    printf("\n\n");
}