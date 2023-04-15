#include <stdio.h>

int main(){

    int n;
    int sum;

    printf("Por favor, informe o valor de n: ");
    scanf("%d", &n);
    
    // sum = 0 + 1 + 2 + ... + n
    for(int i = 0; i <= n; i++){
        //sum = sum + i;
        sum += i;
    }

    printf("O resultado da somatoria de 0, ..., %d e: %d\n", n, sum);

    return 0;
}
