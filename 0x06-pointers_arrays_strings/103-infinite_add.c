#include "main.h"

/**
 * infinite_add - function that adds 2 numbers together
 * @n1: first integer
 * @n2: second integer
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: function pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, digits = 0, i = 0, j = 0;
	int val1 = 0, val2 = 0, temp_tot = 0, len1 = 0, len2 = 0;

	while (n1[len1] != '\0') len1++;

	while (n2[len2] != '\0') len2++;

	if (len1 >= size_r || len2 >= size_r)

	return (0);	
	i = len1 - 1;
	j = len2 - 1;
	while (j >= 0 || i >= 0 || overflow == 1)
	if (i < 0)
			val1 = 0;
		else
			val1 = n1[i] - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = n2[j] - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		r[digits] = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	if (overflow > 0)
	if (digits >= (size_r - 1))
		return (0);
	r[digits] = '\0';
	cap_string(r);
	return (r);
}

