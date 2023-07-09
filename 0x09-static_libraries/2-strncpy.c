#include "main.h"

/**
 * _strncpy - a fucntion that copies a string
 * @dest: destination for the copied string
 * @src: source of string
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;


	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);
}
 

