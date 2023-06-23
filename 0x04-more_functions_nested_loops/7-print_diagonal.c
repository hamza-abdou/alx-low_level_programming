#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: variable integer
 *Return: 0
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
