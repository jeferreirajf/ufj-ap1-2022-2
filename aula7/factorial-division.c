#include <stdio.h>

int main(){

    int n;
    float sum = 0;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        
        float factorial = 1;
        
        for(int k = 1; k <= i; k++){
            factorial *= k;
        }

        float division = 1 / factorial;

        sum += division;
    }

    printf("O resultado e %f\n", sum);

    return 0;
}