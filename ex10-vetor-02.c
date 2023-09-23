#include <stdio.h>
#define N 5

int main(){
    int vetor[N];
    printf("Digite %d valores: ",N);
    for(int i=0; i<N; i++){
        scanf("%d",&vetor[i]);       
    }

    printf("Mostrando %d valores: ",N);
    for(int i=0; i<N; i++){
        printf("%d\n",vetor[i]);       
    }
}