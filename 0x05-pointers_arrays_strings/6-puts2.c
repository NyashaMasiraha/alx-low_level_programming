#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input string
 */

void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	int b;

	while (str[longi] != '\0')
	{
		longi++;
	}

	a = longi - 1;

	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			putchar(str[b]);
		}
	}
	putchar('\n');
}

