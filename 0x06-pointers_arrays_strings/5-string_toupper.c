#include "main.h"
#include<ctype.h>
/**
 *string_toupper - Uppercases all lower case strings
 *@str: String to be uppercased
 *Return: string
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (islower(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}
	return (str);
}
