#include <stdio.h>

int main(){

    int option;

    do{

        printf("1 - Opcao 1\n");
        printf("2 - Opcao 2\n");
        printf("3 - Opcao 3\n");
        printf("4 - Sair\n");

        scanf("%d", &option);

        if(option < 1 || option > 4){
            printf("Opcao invalida.\n");
        }

    } while (option != 4);

    return 0;
}