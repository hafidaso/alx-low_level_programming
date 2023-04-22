#include "function_pointers.h"
#include <unistd.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to use
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
