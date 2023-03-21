#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase.
(*
 * Return: 0 on success
 */
int print_alphabet(void)
{
	char letter;
	
	for(letter = 'a'; letter < 'z'; letter++)
	_putchar(letter);
	
	_putchar('\n');

}
