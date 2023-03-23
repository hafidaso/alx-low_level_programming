#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: number of times the character should be printed
 * Return: void
 */

void print_line(int n)
{
    int i;
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }
    for (int i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
