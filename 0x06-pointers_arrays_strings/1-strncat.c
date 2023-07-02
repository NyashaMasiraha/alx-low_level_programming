#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * using at most n bytes from source
 * @src: string input source
 * @dest: string input destination
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	a = 0;

	while (a < n && src[a] != '\0')
	{
	dest[i] = src[j];
	i++;
	a++;
	}

	dest[i] = '\0';

	return (dest);
}

