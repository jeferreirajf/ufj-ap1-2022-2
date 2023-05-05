//Um comerciante possui uma mochila que suporta somente N quilos.
//Estão disponiveis uma quantidade ilimitada de 3 produtos: aneis, especiarias e livros
//Cada um pesa espectivamente 100g, 1kg e 500g
//Lucro respectivamente R$100,00, R$ 950,00 e R$550,00

//J e T, projeto 3 de AP1. 28/04/23.
//Código para compilar: gcc backpack_problem.c -o backpack_problem

#include <stdio.h>


float readNFromTerminal(char *message){
    float n;
    
    printf("%s", message);
    scanf("%f", &n);

    return n;
}

int booksCounter(float n){
    int bookscounter = 0;
    float weight = 0;
    
    for(int i = 0; weight <= (n - 0.5); i++){

        bookscounter++;

        weight = bookscounter * 0.5;
    }
    
    return bookscounter;

}

int ringsCounter(float emptyspace){
    int numberofrings = 0;
    float weight = 0;
   
    for(int i = 0; 0 < (emptyspace - weight); i++){
   
    printf("%f\n", emptyspace)  ;   
    
    numberofrings++;
    weight = numberofrings * 0.1f;
    printf("peso: %f\n", emptyspace - weight);
    }
    
    return numberofrings;

}

int main(){

float n = readNFromTerminal("Digite um numero: ");
float books = 0.5;
float rings = 0.1;
float spices = 1;
float profitbooks = 550;
float profitrings = 100;
float profitspices = 950;
int numberofbooks = booksCounter(n);
float emptyspace = 0;

emptyspace = n - (numberofbooks * 0.5);

int numberofrings = ringsCounter(emptyspace);

printf("%d\n", numberofbooks);
printf("%f\n", emptyspace);
printf("%d\n", numberofrings);
return 0;
}
