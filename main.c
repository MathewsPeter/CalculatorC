/*
 * main.c
 *
 *  Created on: 17-Feb-2021
 *      Author: Mathews Peter
 */
 
#include <stdio.h>
#include "calc.h"

int main(void);
int main(void)
{
	float a, b;
	char op;
	printf("Input first number: ");	scanf("%f", &a);
	printf("Input operator: ");	scanf("%s", &op);
	printf("Input second number: ");	scanf("%f", &b);
	
	switch(op)
	{
		case '+': calcsum(a,b); break;
		case '-': calcdiff(a,b); break;
		case '*': calcprod(a,b); break;
		case '/': calcdiv(a,b); break;
		case '^': calcpow(a,b); break;
		default: printf("Supported operations are + - * / ^\n");
	}
	printf("\n");
	return 0;
}
	