#include <stdio.h>
#include "main.h"
/**
 *_strstr - function that locates a substring
 *@haystack: pointeurs haystack
 *@needle: poiteurs needle
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *o = haystack;
		char *t = needle;

		while (*o == *t && *t != '\0')
		{
			o++;
			t++;
		}
		if (*t == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
