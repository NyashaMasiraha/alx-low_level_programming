#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer to the first node of list_t
 * list_t: linked list to be measured
 * Return: number of node in list_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
