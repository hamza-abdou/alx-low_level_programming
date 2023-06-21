#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_last_digit -  prints the last digit of a number
 *
 *@r: input number
 *
 *Return: the value of the last digit
 */
int print_last_digit(int r)
{
	int l = r % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
