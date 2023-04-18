#include <stdio.h>

int main(){
    float n = 10;

    float *pointer;

    pointer = &n;

    *pointer += 10;

    printf("O valor em n e: %f\n", n);

    // printf("O valor em pointer e: %d\n", pointer);

    printf("O valor em *pointer e: %d\n", *pointer);

    return 0;
}