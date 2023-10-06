#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N],vetB[N], vetC[2*N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%51;
        vetB[i]=rand()%51;
    }
    for(int i=0; i<N; i++){
        vetC[i] = vetA[i];
        vetC[5+i] = vetB[i];   
    }
    for(int i=0; i<N; i++){
        printf("C%2d (%2d) = A%2d (%2d)\n",i,vetC[i],i,vetA[i]);
    }
        for(int i=0; i<N; i++){
        printf("C%2d (%2d) = B%2d (%2d)\n",5+i,vetC[5+i],i,vetA[i]);
    }
}

