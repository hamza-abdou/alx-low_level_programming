#include <ctype.h>
/**
 *_islower - checks for lowercase character.
 *@c: the caractere anothers cases show
 *Return: Returns 1 if c is lowercase or Returns 0 otherwise
 */
int _islower(int c)
{
	int nbre = islower(c);

	if (nbre)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
