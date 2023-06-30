#include <stdio.h>
#include "main.h"
/**
 *_strncat - function that concatenates two strings.
 *@dest: variable dest
 *@src: variable src
 *@n: variable n
 *Return: A poiter to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
