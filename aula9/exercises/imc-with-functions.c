#include <stdio.h>

float calculateImc(float weight, float height){
    return weight / (height * height);
}

float readFloat(char* message){
    float floatValue;

    printf("%s", message);
    scanf("%f", &floatValue);

    return floatValue;
}

int readInt(char* message){
    int intValue;

    printf("%s", message);
    scanf("%d", &intValue);

    return intValue;
}

int main(){

    int option = -1;

    float weight;
    float height;

    do{
        weight = readFloat("Informe um peso: ");

        height = readFloat("Informe uma altura: ");

        printf("O IMC do peso %f e altura %f e: %f\n", 
            weight, height,
            calculateImc(weight, height));

        option = readInt("Para calcular outro imc digite 1 ou 0 para sair. ");
    } 
    while (option == 1);

    return 0;
}