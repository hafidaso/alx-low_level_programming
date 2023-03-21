#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: nothing.
 */

void jack_bauer(void)
{
	int h = 0;
	int s = 0;

	while (x <= 23)
	{
		s = 0;
		while (s <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
			s += 1;
		}
		x += 1;
	}
}
