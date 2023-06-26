#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: Parameter 1
 *@s2: Parameter 2
 *Return: always true
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

