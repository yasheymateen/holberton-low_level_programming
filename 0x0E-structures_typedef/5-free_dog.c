#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: structure to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
		free(d);
	}
}
