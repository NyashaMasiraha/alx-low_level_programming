#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @: string
 * return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
