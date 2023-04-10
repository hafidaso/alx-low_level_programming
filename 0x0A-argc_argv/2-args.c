#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all command-line arguments, one per line
 * @ar: the Var
 * @argv: The Var
 *
 * Return: The Return value/void
 */
int main(int ar, char *argv[])
{
        int i;

        /* loop through all arguments and print them */
        for (i = 0; i < ar; i++)
        {
                printf("%s\n", argv[i]);
        }

        return (0);
}
