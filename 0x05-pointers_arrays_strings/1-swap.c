#include <stdio.h>
#include "main.h"
/**
 *swap_int - swaps the values of two integers.
 *@a: poiteur a
 *@b: pointeur b
 *Return: 0
 */
void swap_int(int *a, int *b)
{

	int c = *a;
	*a = *b;
	*b = c;
}
