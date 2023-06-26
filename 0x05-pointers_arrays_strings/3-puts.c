#include <stdio.h>
#include "main.h"
/**
 *_puts -  prints a string
 *
 *@str: pointeur str
 *Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
