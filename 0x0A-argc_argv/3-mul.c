#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 * @c:  the number of command-line arguments
 * @v: an array of strings containing the command-line arguments
 * Return: 0 if the multiplication was successful, otherwise 1
 */

int main(int c, char **v)
{
	if (c != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(v[1]) * atoi(v[2]));
	return (0);
}
