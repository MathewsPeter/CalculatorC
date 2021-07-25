/*
 * calc.c
 *
 *  Created on: 17-Feb-2021
 *      Author: Mathews Peter
 */
 
#include <stdio.h>
#include <math.h> 

int calcmain(int,int,char); 
int calcmain(int a, char op, int b)
{
 switch(op)
 {
  case '+': return (a+b); break;
  case '-': return (a-b); break;
  case '*': return (a*b); break;
  case '/': return (a/b); break;
  default: printf("Supported operations are + - * / \n");
  }
}
