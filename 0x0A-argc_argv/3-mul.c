#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - point entry
 *@argc: argument
 *@argv: argument
 *Return: always (0)
 */
int main(int argc, char *argv[])
{
	int i = 0, y = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", i * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
