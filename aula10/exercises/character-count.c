#include <stdio.h>

int countCharacters(char *string){
    
    int n = 0;

    if(string == NULL)
        return n;

    while(string[n] != '\0')
        n++;

    return n;
}


int main(){

    char *string = "palavra qualquer";

    int nCharacters = countCharacters(string);

    printf("A quantidade de characteres que a string '%s' possui e: %d\n", 
        string, nCharacters);

    return 0;
}