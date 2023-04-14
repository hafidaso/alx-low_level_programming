#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b:  The variable
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *allocate;

	allocate = malloc(b);
	if (allocate == NULL)
		exit(98);
	return (allocate);

}
