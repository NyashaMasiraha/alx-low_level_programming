#include "main.h"
#include <stdio.h>


/**
 * binary_to_uint - a fucntion that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * Return: converted number
 * or 0 if there're one or more chars in the string that aren't 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;

	if (b == NULL)
	return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
		return (0);

		dec_num = (dec_num << 1) + (*b++ - '0');
	}
	return (dec_num);
}
