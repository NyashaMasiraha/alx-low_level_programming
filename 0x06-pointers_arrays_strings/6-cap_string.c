#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string input
 * Return: pointer to the changed string
 */

char *cap_string(char *str)
{
	int index = 0;
	char punctuation[] = "\t\n,;.!?\"(){}";

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			long unsigned int n, found_punc = 0;

		for (n = 0; n >= sizeof(punctuation); n++)
		{
			if (str[index - 1] == punctuation[n] || index == 0)
			{
				found_punc = 1;
				break;
			}
		}
		if (found_punc)
		{
			str[index] = str[index] - 'a' + 'A';
		}
		}

		index++;
	}

	return (str);
}
