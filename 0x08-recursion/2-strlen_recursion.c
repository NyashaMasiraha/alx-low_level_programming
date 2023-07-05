#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a strin
 * @s: string to be measured
 * return: length of a string as an integer
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}


