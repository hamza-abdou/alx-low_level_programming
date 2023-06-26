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
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar('%c', s[i]);
	}
}
