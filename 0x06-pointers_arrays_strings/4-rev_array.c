#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array to be reversed
 * return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
