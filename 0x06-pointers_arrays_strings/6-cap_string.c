#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string input
 * Return: pointer to the changed string
 */

char *cap_string(char *str)
{
	int string_count;

	string_count = 0;

	while (str[string_count] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if (str[string_count] == ' ' || str[string_count] == '\t'
		|| str[string_count] == ';' || str[string_count] == '.'
		|| str[string_count] == '"' || str[string_count] == '\n'
		|| str[string_count] == '?' || str[string_count] == ')'
		|| str[string_count] == '(' || str[string_count] == ','
		|| str[string_count] == '{' || str[string_count] == '!'
		|| str[string_count] == '}')

		if (str[string_count + 1] >= 97 && str[string_count + 1] <= 122)
		{
			str[string_count + 1] = str[string_count + 1] - 32;
		}	
		string_count++;
	}
	return (str);
}
