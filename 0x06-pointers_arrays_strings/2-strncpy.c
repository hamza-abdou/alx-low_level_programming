#include <stdio.h>
#include "main.h"
/**
 *_strncpy -  function that copies a string
 *@dest: variable dest
 *@src: variable src
 *@n: variable n
 *
 *Return: A poiter to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
