#include <stdio.h>

int main(){

	float number;

	printf("Digite um numero: ");
	scanf("%f", &number);

	if( (number > 0) && (number < 1) ){
		printf("\nO seu numero esta entre 0 e 1\n");
	}
	else{
		printf("\nO seu numero nao esta entre 0 e 1\n");
	}

	return 0;
}