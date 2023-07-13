#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *array_range -  that creates an array of integers
 *@min: variable
 *@max: variable
 *Return: x
 */
int *array_range(int min, int max)
{
	int *x, i = 0;

	if (min  > max)
	{
		return (NULL);
	}
	x = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (x == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		x[i] = min;
		i++;
		min++;
	}
	return (x);
}
