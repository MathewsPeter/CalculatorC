/*
 * main.c
 *
 *  Created on: 17-Feb-2021
 *      Author: Mathews Peter
 */
 
#include <stdio.h>
#include<assert.h>
#include "calc.h"

#define UNITTESTMODE 1

int main(void);
int main(void)
{
	#ifndef UNITTESTMODE
	int a, b; char op;
	printf("Input first number: ");	scanf("%d", &a);
	printf("Input operator: ");	scanf("%c", &op);
	printf("Input second number: ");scanf("%d", &b);
	
	printf("%d\n",calcmain(a,b,op));
	#else
	assert( calcmain(1,'+',2) == 3);
	assert( calcmain(-10,'*',2) == -20);
	assert( calcmain(40,'/',3) == 13);
	#endif

	return 0;
}
	
