#include "main.h"
#include <stdlib.h>

 /**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **aaa;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	aaa = malloc(sizeof(int *) * height);

	if (aaa == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		aaa[i] = malloc(sizeof(int) * width);

		if (aaa[i] == NULL)
		{
			for (; i >= 0; i--)
				free(aaa[i]);

			free(aaa);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			aaa[i][j] = 0;
	}

	return (aaa);
}


