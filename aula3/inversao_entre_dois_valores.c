#include <stdio.h>

int main(){

    int a;
    int b;
    int swapValue;

    printf("Digite dois valores ");
    scanf("%d %d", &a, &b);

    swapValue = a;
    a = b;
    b = swapValue;

    printf("Os valores sao: %d %d", a, b);

    return 0;
}