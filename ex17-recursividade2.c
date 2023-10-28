#include <stdio.h>

long somatorio(int n);

int main(){
    int num, resultado;
    printf("Digite um número: ");
    scanf("%d",&num);
    resultado = somatorio(num);
    printf("somatorio: %d\n",resultado);
}
long somatorio(int n){
    if(n==0)
        return 0;
    else
        return n+somatorio(n-1);
}