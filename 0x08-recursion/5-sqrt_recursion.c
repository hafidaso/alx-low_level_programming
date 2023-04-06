#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of
 * @i: the number variable
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	{
		int i = 1;
		while (i * i <= n)
			i++;
		return (_sqrt_recursion(n - (i - 1) * (i - 1)));
	}
}
