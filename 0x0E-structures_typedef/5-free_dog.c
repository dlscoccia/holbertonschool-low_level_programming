#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free allocated memory of dog_t
 * @d: pointer to dog_t struct
 * Return: void
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
