#include <stdio.h>
/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *
 *Return: no return
 */
void jack_bauer(void)
{
	int heure, minute;

	for (heure = 0; heure < 24; heure++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			putchar((heure / 10) + '0');
			putchar((heure % 10) + '0');
			putchar(':');
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
		}
	}
}
