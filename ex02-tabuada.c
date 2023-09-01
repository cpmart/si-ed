#include <stdio.h>

int main(){
    int  num=5;
    int i=1;
    printf("========WHILE========\n");
    while(i<11){
        printf("%d * %d = %d\n",num, i, num*i);
        i++;
    }
    printf("========DO WHILE========\n");
    i=1;
    do{
        printf("%d * %d = %d\n",num, i, num*i);
        i++;
    }while(i<11);
    printf("========FOR========\n");
    for(int i=1;i<11;i++){
        printf("%d * %d = %d\n",num, i, num*i);
    }
}