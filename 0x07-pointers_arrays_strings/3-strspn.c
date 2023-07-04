#include <stdio.h>
#include "main.h"
/**
 *_strspn -  function that gets the length of a prefix substring
 *@s: pointeur s
 *@accept: pointeur accept
 *Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned i, n, j, t;

	v = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		t = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				j++;
				t++;
			}
		}
	}
}
