#include <stdio.h>

int soma(int num1, int num2);
int subt(int num1, int num2);
int mult(int num1, int num2);
float divi(int num1, int num2);

int main(){
    int num1, num2;
    printf("Digite 2 valores: ");
    scanf("%d%d",&num1, &num2);
    printf("Soma.........: %d\n", soma(num1, num2));
    printf("Subtração....: %d\n", subt(num1, num2));
    printf("Multiplicação: %d\n", mult(num1, num2));
    printf("Divisão......: %g\n", divi(num1, num2));
}

int soma(int num1, int num2){
    return num1+num2;
}
int subt(int num1, int num2){
    return num1-num2;
}
int mult(int num1, int num2){
    return num1*num2;
}
float divi(int num1, int num2){
    return (float)num1/num2;
}
