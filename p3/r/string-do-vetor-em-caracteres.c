/*Aluno: R
Bacharelado de Ciência da Computação 
Projeto 3, dia 28 de abril
Código de compilador: gcc String do Vetor em caracteres.c -o String do Vetor em caracteres.c*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define MAX_STR_SIZE	6
#define MIN_STR_SIZE	5

int main ( void ) {
	char *validchars = "dvrst";
	char *newString;
	register int i;
	int str_len;
	
	srand ( time(NULL ));
	str_len = MAX_STR_SIZE;


	// aloca memoria
	newString = ( char * ) malloc ( (str_len + 1) * sizeof(char));
	if ( !newString ){
		printf("[*] Erro ao alocar memoria.\n" );
		exit ( EXIT_FAILURE );
	}
	
	for ( i = 0; i < str_len; i++ ) {
		newString[i] = validchars[ rand() % strlen(validchars) ];
		newString[i + 1] = 0x0;
	}

	printf ( "[*] Tamanho da String: %d\n", str_len );
	printf ( "[*] A string criada foi: %s\n", newString );

	return 0;
}
