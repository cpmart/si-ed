#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetor[N];

    //preenchimento de forma direta
    vetor[0] = 15;
    vetor[1] = 5;
    vetor[4] = 151;
    vetor[2] = 1;
    vetor[3] = 115;
    
    //mostrando de forma direta
    printf("%d\n",vetor[0]);
    printf("%d\n",vetor[1]);
    printf("%d\n",vetor[2]);
    printf("%d\n",vetor[3]);
    printf("%d\n",vetor[4]);
    
    //preenchimento com scanf de forma penosa....
    scanf("%d",&vetor[0]);
    scanf("%d",&vetor[1]);
    scanf("%d",&vetor[2]);
    scanf("%d",&vetor[3]);
    scanf("%d",&vetor[4]);

    printf("%d\n",vetor[0]);
    printf("%d\n",vetor[1]);
    printf("%d\n",vetor[2]);
    printf("%d\n",vetor[3]);
    printf("%d\n",vetor[4]);

    for(int i=0; i<N; i++){
        scanf("%d",&vetor[0]);       
    }
}