#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: string one to concateate
 * @s2: string two to concatenate
 * Return: 0 (success) NULL (failure)
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, ca;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ca = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ca] != '\0')
		ca++;
	conct = malloc(sizeof(char) * (a + ca + 1));

	if (conct == NULL)
		return (NULL);
	a = ca = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}

	while (s2[ca] != '\0')
	{
		conct[a] = s2[ca];
		a++, ca++;
	}
	conct[a] = '\0';
	return (conct);
}

