#include <stdio.h>

int main(){

    int n;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    float sum = 1;

    for(int i = 1; i <= n; i++){
        
        int factorial = 1;

        for(int j = 1; j <= i; j++){
            factorial *= j;
        }

        // sum = sum + 1/factorial;
        sum += (float) 1 / factorial;
    }

    printf("O resultado da sequencia 1 + 1/1! + ... + 1/%d! e : %f", 
        n, sum);

    return 0;
}