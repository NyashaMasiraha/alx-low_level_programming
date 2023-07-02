#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 *@str: string pointer
 * Return: *str
 */

char *rot13(char *str)
{
	int i;
	char ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		ch = str[i];

		if (ch == 'A' && ch <= 'Z')
			str[i] = (ch - 'A' + 13) % 26 + 'A';

			else if (ch >= 'a' && ch <= 'z')
			{
				str[i] = (ch - 'a' + 13) % 26 + 'a';
			}
	}

	return (0);
}
