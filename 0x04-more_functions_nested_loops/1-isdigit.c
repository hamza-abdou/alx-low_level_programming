#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *_isdigit - checks for a digit (0 through 9).
 *@c: integer variable
 *Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	int number = isdigit(c);

	if (number)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
