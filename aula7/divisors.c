#include <stdio.h>

int main(){

    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Os divisores de %d sao: \n", n);

    for(int i = 1; i <= n; i++){
        int division = n % i;

        if(division == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}