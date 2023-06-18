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
		if (lettre == 'q' || lettre == 'e')
		{
			continue;
		}
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
