#include <stdio.h>
/**
 *main - Entry point
 *description: 'prints _putchar, followed by a new line'
 *Return: always 0
*/
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
	return (0);
}
