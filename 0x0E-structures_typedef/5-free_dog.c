#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees all the dogs stored in memory
 * @d: dog structure to be considered
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
