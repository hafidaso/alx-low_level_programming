#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments.
 * @av: pointers to the arguments.
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, b, id = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b]; b++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b]; b++)
		{
			str[id] = av[i][b];
			id++;
		}
		if (str[id] == '\0')
		{
			str[id++] = '\n';
		}
	}
	return (str);
}
