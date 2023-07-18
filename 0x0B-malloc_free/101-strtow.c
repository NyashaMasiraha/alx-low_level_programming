#include <stdlib.h>
#include "main.h"

/**
 * count_word - count the number of words in a string
 * @s: string to evaluate
 * Return: total number of words
 */

int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}

	return (b);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success), NULL on failure
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int n, m = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (c)
			{
				end = n;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[m] = tmp - c;
				m++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = n;
	}

	matrix[m] = NULL;

	return (matrix);
}

