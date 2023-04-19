#include <stdio.h>

/**
 *main - Prints the name of the file it was compiled from
 *Return: Always 0
 */

int main(void)
{

	char *nfile = __FILE__;

	printf("%s\n", nfile);
	return (0);
}
