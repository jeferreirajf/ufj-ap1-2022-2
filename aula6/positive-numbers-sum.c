#include <stdio.h>

int main(){

    int number;
    int sum = 0;

    do {
        printf("Digite um numero inteiro positivo para soma ou negativo para sair: ");
        scanf("%d", &number);
        
        if(number >= 0){
            sum = sum + number;
        }
    } while(number >= 0);

    printf("O resultado da soma e: %d\n", sum);

    return 0;
}