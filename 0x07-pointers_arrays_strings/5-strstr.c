#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @needle: a substring to locate
 * @haystack: a string to search for a substring
 * Return: pointer to the beginning of the located substring or if not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

