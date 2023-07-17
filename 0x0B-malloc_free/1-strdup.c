#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: char
 * Description:  function returns a pointer to a duplicate of the string str
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ccc;
	int n, m = 0;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;

	ccc = malloc(sizeof(char) * (n + 1));

	if (ccc == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		ccc[m] = str[m];

	return (ccc);
}

