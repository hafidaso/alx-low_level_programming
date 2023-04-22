#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer to the desired printing function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
