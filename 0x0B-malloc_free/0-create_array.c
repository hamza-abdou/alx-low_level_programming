#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array of chars
 *@size: variable
 *@c: variable
 *Return: y
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *y;

	if (size == 0)
	{
		return (NULL);
	}
	y = malloc(size * sizeof(char));

	if (y == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		y[i] = c;
	}
	return (y);
}
