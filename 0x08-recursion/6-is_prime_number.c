#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * is_prime_numbers - function returns 1 if the input integer is a prime number
 * @n: Number to check
 * @i: Divisor to check against
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_numbers(int n, int i)
{
	if (n < 2)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_numbers(n, i + 1));
}

/**
 * is_prime_number - Creturns 1 if the input integer is a prime number
 * @n: Number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_numbers(n, 2));
}
