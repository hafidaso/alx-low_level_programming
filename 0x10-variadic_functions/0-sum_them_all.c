#include "variadic_functions.h"

/**
 *sum_them_all - calc sum param
 *@n: num arguments
 *@...: inf number
 *Return: sum of all parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	int sum  = 0;
	unsigned int i = 0;

	va_start(ar, n);
	while (i < n)
	{
		sum += va_arg(ar, int);
		i++;
	}
	va_end(ar);
	return (sum);
}
