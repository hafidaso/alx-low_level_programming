#include<ctype.h>
/**
 *cap_string - capitalises strings
 *@str: string to be capitalised
 *Return: Capitalized string
 */
char *cap_string(char *str)
{
	char *p = str;
	int capitalize_next = 1;

	while (*p != '\0')
	{
		if (isspace(*p) || ispunct(*p))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			*p = toupper(*p);
			capitalize_next = 0;
		}
		p++;
	}
	return (str);
}
