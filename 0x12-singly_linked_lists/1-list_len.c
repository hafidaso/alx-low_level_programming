#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @H: pointer
* Return: the number of elements in a list
*/

size_t list_len(const list_t *H)
{
	size_t cnt = 0;

	while (H != NULL)
	{
		cnt++;
		H = H->next;
	}
	return (cnt);
}
