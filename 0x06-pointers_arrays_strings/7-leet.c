#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int i, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[i] == s1[m])
			{
				n[i] = s2[m];
			}
		}
	}
	return (n);
}

