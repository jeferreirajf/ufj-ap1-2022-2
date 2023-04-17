#include <stdio.h>

#define ARRAY_SIZE 5

int main(){

    int v[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; i++){
        printf("Informe o %d elemento do vetor: ", i);
        scanf("%d", &v[i]);
    }

    int biggestNumber = v[0];

    for(int i = 1; i < ARRAY_SIZE; i++){
        if(biggestNumber < v[i]){
            biggestNumber = v[i];
        }
    }

    printf("O maior numero e: %d\n", biggestNumber);
  
    return 0;
}