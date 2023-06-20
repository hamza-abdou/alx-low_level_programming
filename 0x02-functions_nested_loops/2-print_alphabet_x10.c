#include <stdio.h>
/**
 *2-print_alphabet_x10.c: 'prints 10 times the alphabet, in lowercase"
 *description: '10 times the alphabet, in lowercase'
 *Return: always void
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
