#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * is_prime_help - function returns 1 if the input integer is a prime number
 * @n: Number to check
 * @i: Divisor to check against
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_help(int n, int i)
{
	if (n < 2)
		return (0);
	else if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime_help(n, i + 1));

/**
 * is_prime_number - Creturns 1 if the input integer is a prime number
 * @n: Number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_help(n, 2));
}
