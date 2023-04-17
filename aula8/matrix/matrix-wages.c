#include <stdio.h>

#define N_DEPARTMENT 2
#define N_WORKERS 3

int main() {

    int wages[N_DEPARTMENT][N_WORKERS];

    wages[0][0] = 100;
    wages[0][1] = 50;
    wages[0][2] = 50;
    
    wages[1][0] = 120;
    wages[1][1] = 30;
    wages[1][2] = 20;

    int wagesCost = 0;

    for(int i = 0; i < N_DEPARTMENT; i++){
        for(int j = 0; j < N_WORKERS; j++){
            wagesCost += wages[i][j];
        }
    }

    printf("O total de gasto e: %d\n", wagesCost);

    return 0;
}