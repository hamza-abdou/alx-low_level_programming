#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_most_numbers - prints the numbers, from 0 to 9 Do not print 2 and 4
 *
 *Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
