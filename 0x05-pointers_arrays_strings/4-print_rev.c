#include "main.h"

/**
 * print_rev - function that prints a string in reverse, followed by a new line
 * @s: string
 * return; Always 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int n;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (n = longi; n > 0; n--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
