#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * seperated by comma, followed by a new line
 * @n: number of elements to be printed
 * @a: name of array
 * return: none
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d,", a[i]);
	}

	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}

		else 
		{
			printf("_");
		}

	printf("\n");

}


