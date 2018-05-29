/*
 ============================================================================
 Name        : Arithmetic.c
 Author      : codercument
 Version     :
 Copyright   : Your copyright notice
 Description : Arithmetic Operators in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	int a = 15;
	int b = 10;
	int c;

	c = a + b;
	printf("Sum Operator - Value of c is %d\n", c );

	c = a - b;
	printf("Subtracts Operator - Value of c is %d\n", c );

	c = a * b;
	printf("Multiplication Operator - Value of c is %d\n", c );

	c = a / b;
	printf("Division Operator - Value of c is %d\n", c );

	c = a % b;
	printf("Modulus  Operator - Value of c is %d\n", c );

	c = ++a;
	printf("Increment Operator - Value of c is %d\n", c );

	c = --a;
	printf("Decrement Operator - Value of c is %d\n", c );

	return EXIT_SUCCESS;
}
