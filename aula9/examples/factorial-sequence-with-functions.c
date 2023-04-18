#include <stdio.h>

/**
 * Function that receives an integer value
 * and calculate the factorial of the value received
 * 
 * @param n Value to be calculated
*/
int factorial(int n){

    int factorialValue = 1;

    for(int i = 1; i <= n; i++){
        factorialValue = factorialValue * i;
    }

    return factorialValue;
}

int main(){

    int n;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    float sum = 1;

    for(int i = 1; i <= n; i++){
        sum += (float) 1 / factorial(i);
    }

    printf("O resultado da sequencia 1 + 1/1! + ... + 1/%d! e : %f", 
        n, sum);

    return 0;
}