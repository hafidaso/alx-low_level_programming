#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, non zero value on error
 */

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    operation = get_op_func(argv[2]);

    if (operation == NULL || argv[2][1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    if ((operation == op_div || operation == op_mod) && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = operation(num1, num2);
    printf("%d\n", result);
    return (0);
}

