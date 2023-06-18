#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints the alphabet in lowercase, and then in uppercase'
 *Return: always 0
*/
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}
	for (lettre = 'A'; lettre <= 'Z'; lettre++)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
