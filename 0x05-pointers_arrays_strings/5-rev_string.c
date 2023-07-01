#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int counter = 0;
	int i;
	char temp;

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter / 2; i++)
	{
		temp = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = temp;
	}

}
