#include <stdio.h>

int main(){
    int numero=5, fatorial=1, i;
    printf("==========FOR=========\n");
    for(i=1; i<=numero; i++){
        fatorial *= i;
    }
    printf("fatorial de %d é %d\n",numero,fatorial);
    printf("==========WHILE=========\n");
    i=1;
    fatorial=1;
    while(i<=numero){
        fatorial *= i;
        i++;
    }
    printf("fatorial de %d é %d\n",numero,fatorial);
    printf("==========DO WHILE=========\n");
    i=1;
    fatorial=1;
    do{
        fatorial *= i;
        i++;
    }while(i<=numero);
    printf("fatorial de %d é %d\n",numero,fatorial);
}