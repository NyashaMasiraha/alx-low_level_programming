#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a dog struct
 * @d: pointer to dog struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)

	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);

}

