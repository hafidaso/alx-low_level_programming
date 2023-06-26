#include<string.h>
#include "main.h"
#include<stddef.h>
/**
 *_strncat - Appends two functions together
 *@dest: destination of the file
 *@src: Source
 *@n: Max number of bytes
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
