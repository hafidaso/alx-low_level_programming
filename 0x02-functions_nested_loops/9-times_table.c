#include "main.h"

/**
 * times_table - print the 9 times table
 * No parameter needed
 * Return: returns void
 */
void times_table(void)
{
	int x, y, output;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			output = y * x;

			if (y == 0)
				_putchar('0' + output);
			else if (output >= 10)
			{
				_putchar(' ');
				_putchar('0' + (output / 10));
				_putchar('0' + (output % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + output);
			}
			if (y != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

