#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints the alphabet in lowercase'
 *Return: always 0
*/
int main(void)
{
	int lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
