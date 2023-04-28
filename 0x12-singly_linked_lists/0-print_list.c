#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t
 * @H: Pointer to the head
 * Return: The number of nodes.
 */

size_t print_list(const list_t *H)
{
    size_t count = 0;

    while (H != NULL)
    {
        if (H->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", H->len, H->str);

        count++;
        H = H->next;
    }

    return count;
}


