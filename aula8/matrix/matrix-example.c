#include <stdio.h>

#define N 3
#define M 3

int main(){

    int A[N][M] = {
        {2,5,3},
        {1,18,4},
        {7,6,9}
    };

    // A[0][0] = 2;
    // A[0][1] = 5;
    // A[0][2] = 3;

    // A[1][0] = 1;
    // A[1][1] = 18;
    // A[1][2] = 4;

    // A[2][0] = 7;
    // A[2][1] = 6;
    // A[2][2] = 9;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", A[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}