#include <stdio.h>

int readIntegerFromTerminal(char *message){
    int n;
    
    printf("%s", message);
    scanf("%d", &n);

    return n;
}

int divisorsCounter(int number){
    int contador = 0;
    
    for(int i = 2; i <= number / 2; i++){
        if(number % i == 0){
            contador++;
        }
    }

    return contador;
}

int main(){

    int n = readIntegerFromTerminal("Digite um numero: ");

    int contador = divisorsCounter(n);

    if(contador == 0){
        printf("O numero %d e primo\n", n);
    }
    else{
        printf("O numero %d nao e primo", n);
    }

    return 0;
}