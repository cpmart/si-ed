#include <stdio.h>
/*4. (FOR) Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe de 15 pessoas:  

a) a média de salário do grupo;

b) maior e menor idade do grupo;

c) quantidade de mulheres com salário até R$100,00.*/
int main(){
    int idade, maior, menor, quantidadeMulheresSalarioBaixo=0, i;
    char sexo;
    float salario, totalSalario=0;
    for(i=0; i<5; i++){
        printf("Idade..: "); scanf("%d",&idade);
        printf("Sexo...: "); scanf(" %c",&sexo);
        printf("Salário: "); scanf("%f",&salario);
        totalSalario += salario;
        if(i==0)
            maior = menor = idade;
        else{
            maior = idade>maior?idade:maior;
            menor = idade<menor?idade:menor;
        }
        if(sexo == 'f' && salario <=100)
            quantidadeMulheresSalarioBaixo++;
    }
    printf("Média dos salários: %g\n",totalSalario/i);
    printf("Maior idade: %d\n",maior);
    printf("Menor idade: %d\n",menor);
    printf("Qtd mulheres salário menor que 100 reais: %d\n",quantidadeMulheresSalarioBaixo);
}