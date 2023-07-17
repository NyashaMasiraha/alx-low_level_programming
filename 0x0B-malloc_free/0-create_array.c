#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a function that create an array of char
 * initialize it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		str[j] = c;
	}
	return (str);
}
