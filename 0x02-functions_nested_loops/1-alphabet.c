#include <stdio.h>
/**
 *description: 'prints the alphabe'
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
