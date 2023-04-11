#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup -  function returns a pointer to a new string which
 *  is a duplicate of the string
 * @str: Var
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int x, i;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	copy = malloc(sizeof(char) * (x + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		copy[i] = str[i];

	copy[x] = '\0';

	return (copy);
}
