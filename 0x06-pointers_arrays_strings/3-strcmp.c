#include <stdio.h>
#include "main.h"
/**
 *_strcmp -  function that compares two strings.
 *@s1: variable s1
 *@s2: variable s2
 *Return: s1 s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
