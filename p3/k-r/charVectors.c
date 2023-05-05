// Alunas: K e R
// K -> Escreveu || R -> Supervisionou
// Executional Command -> gcc charVectors.c -o charVectors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomString(char charactersVector[], int vectorSize, int stringLength, char *resultString){
    
    srand(time(NULL));

    for (int i = 0; i < stringLength; i++){
        int letterAleatory = rand() % vectorSize;
        resultString[i] = charactersVector[letterAleatory];
    }

    resultString[stringLength] = '\0';

    return charactersVector;
}

int main(){

    char charactersVector[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    char resultString[124];

    generateRandomString(charactersVector, 26, 123, charactersVector);

    printf("A string gerada e: %s\n", charactersVector);

    return 0;
}
