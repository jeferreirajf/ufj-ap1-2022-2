#include <stdio.h>

int main(){

    int number;

    printf("Insira um numero: ");
    scanf("%d", &number);

    if( (number % 2) == 0){
        printf("%d e par", number);
    }

    if((number % 2) != 0){
        printf("%d e impar", number);
    }

    return 0;
}