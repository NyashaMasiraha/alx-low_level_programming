#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *  returns the index of the first element for which the cmp function return -1
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}

