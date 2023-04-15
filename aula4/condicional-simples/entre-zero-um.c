#include <stdio.h>

int main(){

	float x;

	printf("Digite um numero: ");
	scanf("%f", &x);

	if( (x > 0) && (x < 1) ){
		printf("Sim, seu numero esta entre 0 e 1");
    }

	if((x <= 0) || (x >= 1)){
		printf("Nao, seu numero nao esta entre 0 e 1");
	}

	return 0;
}