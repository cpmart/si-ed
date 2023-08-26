#include <stdio.h>

int main(){
    float temperatura;
    printf("Digite a temperatura: ");
    scanf("%f",&temperatura);
    if(temperatura<20)
        printf("Frio\n");
    else if(temperatura>=20 && temperatura<30)
        printf("Agradável\n");
    else if(temperatura>=30)
        printf("Quente\n");
}