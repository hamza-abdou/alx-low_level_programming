#include <stdio.h>
/**
 *main - Enrty point
 *Descriptin: 'prints all possible combinations of single-digit numbers'
 *Return: always 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
