//Um comerciante possui uma mochila que suporta somente N quilos.
//Estão disponiveis uma quantidade ilimitada de 3 produtos: aneis, especiarias e livros
//Cada um pesa espectivamente 100g, 1kg e 500g
//Lucro respectivamente R$100,00, R$ 950,00 e R$550,00

//J e T, projeto 3 de AP1. 28/04/23.
//Código para compilar: gcc backpack_problem.c -o backpack_problem

//As especiarias não foram usadas pois para visar o lucro mais alto é mais rentavel vender livros e aneis apenas

#include <stdio.h>


float readNFromTerminal(char *message){
    float n;
    
    printf("%s", message);
    scanf("%f", &n);

    return n;
}

int main(){

    float n = readNFromTerminal("Digite um numero: ");
    int weight = n * 10;
    int books = 5;
    int rings = 1;
    int spices = 10;
    int profitbooks = 550;
    int profitrings = 100;
    int profitspices = 950;
    int numberofbooks = 0;
    int numberofrings = 0;
    float restofdivision = 0;
    int profit = 0;

    numberofbooks = weight / books;
    restofdivision = weight % books;
    numberofrings = restofdivision / rings;
    profit = (numberofbooks * profitbooks) + (numberofrings * profitrings);

    printf("A quantidade de produtos que cabem na bolsa com maior lucro possivel é: %d livros e %d anéis\n", numberofbooks, numberofrings);
    printf("O lucro total é: %d\n", profit);

    return 0; 

}