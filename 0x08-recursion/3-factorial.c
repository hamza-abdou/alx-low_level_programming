#include <stdio.h>
#include "main.h"
/**
 *factorial -  the factorial of a given number
 *@n: vriable integer
 *Return: always
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
