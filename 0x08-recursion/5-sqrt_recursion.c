#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _sqrt_help - Calculates the square root of a number using recursion
 * @n: the number to find the square root of
 * @i: the number variable
 * Return: The Return value/void
 */

int _sqrt_help(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt_help(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find the square root of
 * Return: The Return value/void
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_help(n, 0));
}
