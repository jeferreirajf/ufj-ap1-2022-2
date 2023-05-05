/*Desenvolva o código de uma função que recebe um vetor de caracteres, o tamanho do vetor e um número inteiro n.
A função deverá retornar uma string com n caracteres presentes no vetor recebido. Teste esta função fazendo uma chamada
qualquer à ela a partir da main e imprima o retorno na tela.*/

// Dupla: GL e W
// Programador: GL
// Supervisor: W
// Comando de compilar: gcc relatorio_de_venda.c -o relatorio_de_venda

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* r(char *charectersVector, int sizeVector, int n) {
    
    char *string = (char *)malloc(n * sizeof(char));

    for (int i = 0; i < n; i++) {
        string[i] = charectersVector[rand() % sizeVector];
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        string[i] = rand() % 26 + 97;
    }

    return string;
}


int main() {

    char *charectersVector = "abc";
    int sizeVector = 3;
    int n = 10;

    char *result = r(charectersVector, sizeVector, n);

    printf("%s\n", result);
    
    return 0;
}
