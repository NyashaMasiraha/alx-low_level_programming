#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts the elements in a linked list
 * @h: pointer to the first node of the linked list
 * Description: a function that return number of elements of a linked list
 * Returns: count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
