#include <stdio.h>

long fatorial(int n);

int main(){
    int num, resultado;
    printf("Digite um número: ");
    scanf("%d",&num);
    resultado = fatorial(num);
    printf("Fatorial: %d\n",resultado);
}

long fatorial(int n){
    if(n==0)
        return 1;
    else
        return n*fatorial(n-1);
}