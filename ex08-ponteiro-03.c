#include <stdio.h>
void trocarValores(int *p1, int *p2);

int main()
{
    int num1 = 10, num2 = 20;
    trocarValores(&num1, &num2); // mandar endereço
    printf("Num1: %d\n", num1);
    printf("Num2: %d\n", num2);
}
void trocarValores(int *p1, int *p2)
{
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}


