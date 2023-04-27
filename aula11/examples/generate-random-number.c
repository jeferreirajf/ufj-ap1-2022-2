#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));

    int n = rand();

    printf("O numero aleatorio e: %d\n", n);

    return 0;
}