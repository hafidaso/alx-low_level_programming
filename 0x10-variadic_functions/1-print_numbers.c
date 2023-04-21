#include "variadic_functions.h"

/**
 *print_numbers - Prints numbers followed by a new line
 *@separator: The string to be printed between numbers
 *@n: inf number
 *@...: inf number
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i = 0;

	va_start(ar, n);
	while (i < n)
	{
		printf("%d", va_arg(ar, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ar);
}
