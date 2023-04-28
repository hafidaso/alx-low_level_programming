#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *nw_node;
    size_t len = 0;

    nw_node = malloc(sizeof(list_t));
    if (nw_node == NULL)
        return (NULL);

    nw_node->str = strdup(str);
    if (nw_node->str == NULL)
    {
        free(nw_node);
        return (NULL);
    }

    while (str[len])
        len++;

    nw_node->len = len;
    nw_node->next = *head;
    *head = nw_node;

    return (nw_node);
}

