#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
 int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    // skip any non-digit characters and check for sign
    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            sign = -sign;
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            break;
        }
        i++;
    }

    // process each digit character and accumulate result
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + s[i] - '0';
        } else {
            // break if we encounter a non-digit character
            break;
        }
        i++;
    }

    return sign * result;
}

