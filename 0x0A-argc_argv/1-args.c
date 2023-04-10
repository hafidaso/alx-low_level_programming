#include <stdio.h>
#include <unistd.h>

/**
 * main  - The Function
 * @z:  The variable
 * @v: The Var
 * Return: The Return value/void
 */

int main(int z, char __attribute__((unused)) **v)
{
	printf("%d\n", z - 1);
	return (0);
}
