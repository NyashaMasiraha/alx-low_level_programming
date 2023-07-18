#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: 0(success), NULL (failure)
 */

char *argstostr(int ac, char **av)
{
	int j, m, n = 0, x = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][n]; m++)
			x++;
	}
	x += ac;

	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (m = 0; av[j][m]; m++)
	{
		str[m] = av[j][m];
		x++;
	}
	if (str[m] == '\0')
	{
		str[m++] = '\n';
	}
	}
	return (str);
}
