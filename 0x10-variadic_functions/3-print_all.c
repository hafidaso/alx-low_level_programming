#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 *@...: the arguments
 *Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ar;
	char *s;
	char *separator = "";

	va_start(ar, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ar, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ar, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ar, double));
					break;
				case 's':
					s = va_arg(ar, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	putchar('\n');
	va_end(ar);
}
