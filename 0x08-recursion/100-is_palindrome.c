#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _strlen - o get the length of the string
 * @s: String to get length of
 * Return: Length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_num - Helper function to check if a string is a palindrome
 * @s: String to check
 * @start: Index of start of string
 * @end: Index of end of string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_num(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_num(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (len <= 1)
		return (1);
	return (is_palindrome_num(s, 0, len - 1));
}
