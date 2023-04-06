#include "main.h"
#include <unistd.h>

/**
 *_puts_recursion - prints a chess board
 *@s: an array of pointers
 *Return: nothing void
 */
 
 void _puts_recursion(char *s) // base case: end of string
{
	if (*s == '\0')
	{
		_putchar('\n'); // add a new line character
		return;
	}
	_putchar(*s); // print current character
	_puts_recursion(s + 1); // recurse on the rest of the string
}
