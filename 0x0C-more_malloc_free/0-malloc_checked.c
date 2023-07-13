#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - that allocates memory using malloc
 *@b: variable
 *
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
