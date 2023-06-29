#include <stdio.h>
#include "main.h"
/**
 *char *_strcat - function that concatenates two strings
 *@dest: variable dest
 *@src: variable src
 *Retun: dest
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
