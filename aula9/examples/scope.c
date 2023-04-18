#include <stdio.h>
#include <stdlib.h>

void function1(int n)
{
	printf("n em function1: %d\n", n);
}

void function2()
{
	int n = 3;
	
	printf("n em function2: %d\n", n);
}

void function3(int n)
{
	n = 5;
	
	printf("n em function3: %d\n", n);
}

void function4(int *n)
{
	*n = -7;
	
	printf("n em function4: %d\n", *n);
}

int main()
{
	// Variavel n local em main
	int n = 10;
	
	printf("n em main: %d\n", n);
	
	// Passado 100 por parametro. n em funcao1 vai então valer 100
	function1(100);
	
	// Nada passado por parametro. n é declarado dentro de 
	// funcao2 e não altera o valor de n em main
	function2();
	
	// n é passado como parametro por copia. n dentro de funcao3 
	// será uma copia do n de main, mas não a mesma variável.
	function3(n);
	
	printf("n em main depois de funcao3: %d\n", n);
	
	// n é passado por endereço. n dentro de funcao4 será O MESMO
	// n de main.
	function4(&n);
	
	printf("n em main depois de function4: %d\n", n);
	
	return 0;
}