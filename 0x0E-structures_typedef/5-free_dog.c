#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory
 * @d: array
 *
 * Return: Always success
 */
void free_dog(dog_t *d)
{
	if (d0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
