#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  a function that executes a function
 * given as a parameter on each element of an array
 * @array: array
 * @size: number of array element to print
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}

