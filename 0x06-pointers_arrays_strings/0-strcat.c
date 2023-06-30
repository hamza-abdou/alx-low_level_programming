#include <stdio.h>
#include "main.h"
/**
 *_strcat - function that concatenates two strings
 *@dest: variable dest
 *@src: variable src
 *Return: A point to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, l = 0;

	while (dest[i++])
	{
		l++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[l++] = src[i];
	}
	return (dest);
}
