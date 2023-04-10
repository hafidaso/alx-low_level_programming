#include <stdio.h>
#include <unistd.h>

/**
 * main -  program that prints the number of arguments passed into it
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: The Return value/void
 */
 
int main(int argc, char *argv[])
{
        printf("%d\n", argc - 1);
        return (0);
}
