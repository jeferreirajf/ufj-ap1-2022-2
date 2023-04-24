#include <stdio.h>
#include <stdbool.h>

bool isEmpty(char *string){

    if(string == NULL)
        return true;

    if(string[0] == '\0')
        return true;
    else
        return false;
}

int main(){

    char *string = " ";

    int isStringEmpty = isEmpty(string);

    if(isStringEmpty){
        printf("A string '%s' esta vazia\n", string);
    }
    else{
        printf("A string '%s' nao esta vazia\n", string);
    }

    return 0;
}