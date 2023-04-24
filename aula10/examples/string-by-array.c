#include <stdio.h>

int main(){

    char string1[] = {'s', 't', 'r', ',', ' ', '0', '\n', '\0'};

    char *string2 = "str, 0\n";

    printf("%s", string1);
    printf("%s", string2);

    return 0;
}