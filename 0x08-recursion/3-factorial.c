#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 *int factorial(int n); - function that returns the factorial of a given number
 *@s: an array of pointers
 *Return: nothing void
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
