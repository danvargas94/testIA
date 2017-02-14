#include <stdlib.h>
#include <stdio.h>

/********************************************************************************
	For this assignment, you have to build a calculator that adds two numbers.
	Input
	The input consists of two lines, each containing one of the operands.
	Output
	Output the sum of the operands.
*********************************************************************************/

int main(){
	int n1, n2;
	scanf("%i", &n1);
	scanf("%i", &n2);
	printf("%i\n", n1 + n2 );
	return 0;
}