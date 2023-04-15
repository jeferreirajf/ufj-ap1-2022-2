#include <stdio.h>

int main() {

    int n;

    printf("Digite quantas vezes voce quer ver branco e cinza: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("cinza\n");
        }
        else {
            printf("branco\n");
        }
    }

    return 0;
}