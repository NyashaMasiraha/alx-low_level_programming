#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: the string to be printed
 * retrurn: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar((*str++));
	}
	putchar('\n');
}

