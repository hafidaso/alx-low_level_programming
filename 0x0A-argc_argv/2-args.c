#include <stdio.h>
#include <unistd.h>

/**
 * main - The Function
 * @x:  The variable
 * @v: THe variable
 * Return: The Return value/void
 */

int main(int x, char **v)
{
	if (x >= 1)
	{
		while (*v)
		{
			printf("%s\n", *v);
			v++;
		}
	}
	return (0);
}
