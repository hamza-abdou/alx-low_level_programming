#include "main.h"
/**
 *_isalpha - shwon 1 if the input is a
 *letter another cases, shown 0
 *
 *@c: the caractere in assci code
 *
 *Return: 1 for letter 0 for the rest
 */
int _isalpha(int c)
{
	int nbre = isalpha(c);

	if (nbre)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
