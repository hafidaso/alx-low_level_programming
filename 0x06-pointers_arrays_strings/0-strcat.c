#include "main.h"
/**
 *_strcat - appends two strings
 *@src: source
 *@dest: Destination
 *Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
