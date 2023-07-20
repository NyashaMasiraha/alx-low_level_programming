#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * init_dog - a fucntion that initializes a variable of type struct dog
 * @d: pointer to a variable of type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

