#include <stdio.h>

#define NUMBER_WORKERS 5000

int main(){

    int wages[NUMBER_WORKERS];

    // Set initial value for each element
    for(int i = 0; i < NUMBER_WORKERS; i++){
        wages[i] = 0;
    }

    wages[0] = 100;
    wages[1] = 50;
    wages[2] = 50;
    wages[3] = 120;
    wages[4] = 30;

    int wagesCost = 0;

    for(int i = 0; i < NUMBER_WORKERS; i++){
        wagesCost += wages[i];
    }

    printf("O gasto total com salarios e %d\n", wagesCost); 

    return 0;
}