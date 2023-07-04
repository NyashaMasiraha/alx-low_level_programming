#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @n: number of bytes of the allocated memnory
 * @b: desired memory size
 * @s: address of the allocated memory
 * return: pointer to the allocated memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
