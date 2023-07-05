#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string to be printed followed by a new line
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
