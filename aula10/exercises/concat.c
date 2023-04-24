#include <stdio.h>
#include <stdlib.h>

int countCharacters(char *string){
    
    int n = 0;

    if(string == NULL)
        return n;

    while(string[n] != '\0')
        n++;

    return n;
}


char* concat(char* str1, char* str2) {

    int nCharStr1 = countCharacters(str1);
    int nCharStr2 = countCharacters(str2);

    int nCharStr3 = nCharStr1 + nCharStr2 + 1;

    char *str3 = (char*) malloc(nCharStr3 * sizeof(char));

    // Copy first string into str3
    for(int i = 0; i < nCharStr1; i++){
        str3[i] = str1[i];
    }

    // Copy second string after
    // first characters
    for(int i = 0; i < nCharStr2; i++){
        str3[i + nCharStr1] = str2[i];
    }

    // Put end string character "\0"
    str3[nCharStr1 + nCharStr2] = '\0';

    return str3;
}

int main(){

    char *str1 = "Hello world! ";
    char *str2 = "How are you?";

    // Hello world! How are you?
    char *str3 = concat(str1, str2);

    printf("A concatenacao de '%s' com '%s' e '%s'",
        str1, str2, str3);

    free(str3);

    printf("A concatenacao de '%s' com '%s' e '%s'",
        str1, str2, str3);
    
    return 0;
}