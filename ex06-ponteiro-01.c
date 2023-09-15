#include <stdio.h>

int main(){
    int valor, *pontValor;
    valor = 123;
    pontValor = &valor;
    printf("valor: %d\n",valor);
    printf("valor: %d\n",*pontValor);
    printf("End: %p\n",&valor);
    printf("End: %p\n",pontValor);
}   