#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"


/**
 *_strdup - make a copy string
 *@s: the struct
 *Return: void
 */

char *_strdup(char *s)
{
	int i = 0;
	char *new;

	if (!s)
		return (NULL);
	while (s[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/**
 *new_dog - Creates a new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: a new dog_t struct
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = (dog_t *)malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = _strdup(name);
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
