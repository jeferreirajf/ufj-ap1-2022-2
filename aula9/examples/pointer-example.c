#include <stdio.h>

int main(){
    int n = 10;

    int *pointer;

    pointer = &n;

    *pointer += 10;

    printf("O valor em n e: %d\n", n);

    printf("O valor em pointer e: %d\n", pointer);

    printf("O valor em *pointer e: %d\n", *pointer);

    return 0;
}