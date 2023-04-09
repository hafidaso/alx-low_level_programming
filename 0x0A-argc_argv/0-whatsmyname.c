#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: int
 * @argv : list
 * Return: Always 0.
 */

int main(int c, char **v)
{
	if (c > 0)
		printf("%s\n", *v);
	return (0);
}
