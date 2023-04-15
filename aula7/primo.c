#include <stdio.h>

int main(){

    int n;
    int division;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int divisorsCounter = 0;

    for(int i = 2; i < n; i++){
        
        division = n % i;
        
        if(division == 0){
            divisorsCounter++;
        }
    }
    
    if(divisorsCounter > 0){
        printf("O numero nao e primo.\n");
    }
    else{
        printf("O numero e primo.\n");
    }



    return 0;
}