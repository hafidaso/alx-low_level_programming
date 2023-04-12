#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int connection;
	char *y;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	connection = _strlen(s1) + _strlen(s2) + 1;
	y = malloc(connection * sizeof(char));
	if (!y)
		return (NULL);
	while (s1[i])
	{
		y[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		y[i + j] = s2[j];
		j++;
	}
	y[i + j] = s2[j];
	return (y);
}
