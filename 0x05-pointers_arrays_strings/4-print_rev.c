#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *print_rev - prints a string
 *@s: pointeur s
 *Return: 0
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (n -= 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
