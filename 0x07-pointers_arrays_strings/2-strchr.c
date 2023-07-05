#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to search for character c
 * @c: character to search for in string s
 * return: pointer to the first occurence of c, 0 if c not found
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
		return (&s[n]);
	}
	return (0);
}
