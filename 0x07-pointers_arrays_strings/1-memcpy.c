#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination for the copied n bytes
 * @src: source of the copied n bytes.
 * @n : number of bytes to be copied
 * Return: a pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = 0;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
