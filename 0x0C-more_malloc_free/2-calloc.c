#include "main.h"
#include <stdlib.h>

/**
 * *_calloc -  a function that allocates memory for an array, using malloc
 * @size: size in bytes of each array element
 * @nmemb: number of array elements
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
/**
 * *_memset - a function that  fills  memory with a constant byte
 * @m: memory area to be filled
 * @c: character to copy
 * @n: number of times to copy character
 * Return: pointer to the memory area m
 */

char *_memset(char *m, char c, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		m[j] = c;
	}

	return (m);
}

