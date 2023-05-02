#include <stdio.h>

int f(int x){

    int sum = 0;

    for(int i = 0; i < x; i++)
        sum += 1;

    return sum;
}

int recursiveF(int x){
    if(x == 1){
        return 1;
    }
    else if(x > 1) {
        return 1 + recursiveF(x-1);
    }
    else{
        return 0;
    }
}

int main(){

    int x = 0;

    int result = f(x);

    printf("O resultado de f(%d) e %d\n", x, result);

    printf("O resultado de recursiveF(%d) e %d\n", x, recursiveF(x));

    return 0;
}