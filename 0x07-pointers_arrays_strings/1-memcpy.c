#include <stdio.h>
#include "main.h"
/**
 *_memcpy -  that copies memory area
 *@dest: poiteurs dest
 *@src: poiteurs src
 *@n: variable n
 *Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
