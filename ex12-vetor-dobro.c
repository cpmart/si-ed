#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetorA[N],vetorB[N];

    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetorA[i]=rand()%10+1;      
        printf("%d\n",vetorA[i]);       
    }
    printf("=========\n");
    for(int i=0; i<N; i++){
        vetorB[i] = vetorA[i]*2;
        printf("%d\n",vetorB[i]);       
    }
}