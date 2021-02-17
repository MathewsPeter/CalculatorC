/*
 * calc.c
 *
 *  Created on: 17-Feb-2021
 *      Author: Mathews Peter
 */
 
#include <stdio.h>
#include <math.h> 

void calcsum(float,float);
void calcdiff(float,float);
void calcprod(float,float);
void calcdiv(float,float);
void calcpow(float,float);

void calcsum(float a,float b)
{	printf("%g + %g = %g", a, b, a+b);
}
void calcdiff(float a,float b)
{	printf("%g - %g = %g", a, b, a-b);
}
void calcprod(float a,float b)
{	printf("%g * %g = %g", a, b, a*b);
}
void calcdiv(float a,float b)
{	printf("%g / %g = %g", a, b, a/b);
}
void calcpow(float a,float b)
{	printf("%g ^ %g = %g", a, b, pow(a,b));
}
