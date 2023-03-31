#include "main.h"
/**
 *_strncpy - Function that copies a string
 *@dest: Destination
 *@src: source
 *@n: Size in bytes
 *Return: always 0-success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		src[i] = dest[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
