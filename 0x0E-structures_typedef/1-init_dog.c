#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes the struct dog
 * @d: struct
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
