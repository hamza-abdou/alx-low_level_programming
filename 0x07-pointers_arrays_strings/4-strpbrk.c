#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s: pointeus s
 *@accept: pointuers accept
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int n, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
