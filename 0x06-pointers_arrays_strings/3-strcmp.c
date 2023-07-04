#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1:string to be compared
 * @s2: string to be compared
 * return: s1[n] - s2[n]
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
