// ALUNOS: A e A
// PROGRAMADOR: A e A
// CODIGO PARA COMPILAR: gcc random_string.c -o radom_string

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char* randomString (char* vector, int size, int n ){

    char* generatedString = (char*) malloc((n+1) * sizeof(char));

    for(int i = 0; i < n; i++){ 

        int random = rand() % size;
        generatedString[i] = vector[random];
        
    }

    return generatedString;
}

int main(){

    srand(time(NULL));
    char vector []= {'a', 'b', 'c'};

    char *generatedString = randomString(vector, 3, 10);

    printf("A sua string Aleatoria e: %s\n", generatedString);
    

        return 0;
}