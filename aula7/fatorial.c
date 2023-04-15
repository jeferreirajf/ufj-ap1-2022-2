#include <stdio.h>

int main()
{

    int n;
    int factorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    // for(int i = 1; i <= n; i++){
    // for(int i = n; i >= 1; i--){
    //  factorial = factorial * i
    // factorial *= i;
    //}

    int i = 1;
    
    while (i < n) {
        i++;
        factorial *= i;
    }

    printf("O fatorial de %d! e %d", n, factorial);

    return 0;
}