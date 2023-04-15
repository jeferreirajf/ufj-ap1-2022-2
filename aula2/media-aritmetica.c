#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    float media_aritmetica;

    printf("Digite tres numeros: ");

    scanf("%d %d %d", &numero1, &numero2, &numero3);

    media_aritmetica = (numero1 + numero2 + numero3) / 3.0;

    printf("Sua media aritmetica e %f\n", media_aritmetica);
}