#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - Frees a dog
 *@d: Pointer to dog_t structure to be freed
 *Return: void
 */

void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
        free(d->owner);
        free(d);
	}

}
