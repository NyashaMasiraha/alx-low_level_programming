#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: amount of bytes to allocate
 * Description: program allocates memory using malloc and return a pointer
 * Return: a pointer to new memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

