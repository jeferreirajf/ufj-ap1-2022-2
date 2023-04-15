#include <stdio.h>

int main()
{
    float peso = -1;
    float altura = -1;
    float imc = -1;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%.2f", imc);
}