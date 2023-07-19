#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - function given as a parameter on each element of an array
 *@array: pointeus
 *@size: variable
 *@action: pointeurs
 *Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
