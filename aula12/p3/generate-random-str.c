#include <stdio.h>

int main() {
    char charactersVector[] = {'a', 'b', 'c'};

    char *randomString = generateRandomString(charactersVector,
                                                 3, 10);

    printf("A string gerada e: %s\n", randomString);

    return 0;
}