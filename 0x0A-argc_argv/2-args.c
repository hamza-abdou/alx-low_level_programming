#include <stdio.h>
#include "main.h"
/**
 *main -point entry
 *@argc: argument
 *@argv: argument
 *Return: always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
