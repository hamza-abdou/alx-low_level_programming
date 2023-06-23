#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_isupper -  checks for uppercase character.
 *@c: varible caractere
 *Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	int caractere = isupper(c);

	if (caractere)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
