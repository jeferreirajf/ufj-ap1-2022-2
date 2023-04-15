#include <stdio.h>
#include <math.h>

int main(){

    int n;
    int sum = 0;
    float productory = 1;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    for(int i = 1; i <= n / 2; i++){
        productory *= sqrt(i);
    }

    float result = sum + productory;

    printf("O resultado e %f\n", result);

    return 0;
}