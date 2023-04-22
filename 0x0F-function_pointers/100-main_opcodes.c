#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 if the number of arguments is incorrect
 */
int main(int argc, char *argv[])
{
    int num_bytes, i;
    unsigned char *ptr;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    ptr = (unsigned char *)main;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", ptr[i]);
        if (i < num_bytes - 1)
        {
            putchar(' ');
        }
    }
    putchar('\n');

    return (0);
}

