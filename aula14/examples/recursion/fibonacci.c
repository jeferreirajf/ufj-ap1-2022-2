#include <stdio.h>

int fibonacci(int x) {
    if (x < 2)
        return x;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}

int main(){

    int x = 45;

    printf("Vamos calcular o fibonacci de %d\n", x);

    int result = fibonacci(x);

    printf("O fibonacci de %d e %d\n", x, result);

    return 0;
}