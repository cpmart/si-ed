#include <stdio.h>

int numero = 10;
//Protótipo = declaração da função
void imprimirNome();
float pi();
float maiorValor(float num1, float num2);
void imprimirPi(float pi);

int main(){
    imprimirNome();   
    printf("%g\n",pi()); 
    printf("Maior: %g\n",maiorValor(5,pi()));
    imprimirPi(3.14159);
}
void imprimirNome(){
    printf("Cristiano\n");
}
float pi(){
    imprimirNome();
    return 3.14;
}
float maiorValor(float num1, float num2){
    num1 = numero;
    return num1>=num2?num1:num2;
}
void imprimirPi(float pi){
    printf("PI = %g\n",pi);
}