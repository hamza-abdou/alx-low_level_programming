#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *@str: variable
 *Return: s
 */
char *_strdup(char *str)
{
	int y = 0, i = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	while (y < i)
	{
		s[y] = str[y];
		y++;
	}
	s[y] = '\0';
	return (s);
}
