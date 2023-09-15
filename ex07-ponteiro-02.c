#include <stdio.h>
void preencher(int num1, int num2);
int main(){
    int num1, num2;
    preencher(num1, num2);
    printf("Num1: %d\n", num1);
    printf("Num2: %d\n", num2);
}
void preencher(int num1, int num2){
    num1 = 1005;
    printf("Digite um valor: ");
    scanf("%d",&num2);
}