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
	int n = 10;
	
	printf("n em main: %d\n", n);
	
	function1(100);
	
	function2();
	
	function3(n);
	
	printf("n em main depois de funcao3: %d\n", n);
	
	function4(&n);
	
	printf("n em main depois de function4: %d\n", n);
	
	return 0;
}