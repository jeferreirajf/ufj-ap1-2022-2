#include <stdio.h>
#include <math.h>

int sumFunction(int n){
    int sum = 0;

    // Calculate sum
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    return sum;
}

float productoryFunction(int n){
    float productory = 1;

    // Calculate productory
    for(int i = 1; i <= n; i++){
        productory *= sqrt(i);
    }

    return productory;
}

int main(){

    int n;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    int sum = sumFunction(n);

    float productory = productoryFunction(n/2);

    // Calculate equation
    float equationResut = sum + productory;

    printf("O resultado e: %f\n", equationResut);

    return 0;
}