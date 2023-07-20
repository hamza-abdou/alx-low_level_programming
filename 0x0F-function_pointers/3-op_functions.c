#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - fonction qui return une somme
 *@a: variable
 *@b: variable
 *Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - fonction qui return une soustraction
 *@a: variable
 *@b: variable
 *Return: a -b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - function qui renvois un mutiplication
 *@a: variable
 *@b: variable
 *@Return: a* b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - fountion qui renvois une division
 *@a: variable
 *@b: variable
 *Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - founction qui return le modulo
 *@a: variable
 *@b: variable
 *@Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
