#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - a function that prints all elements of a singly liked list
 * @h: pointer to the singly linked list
 * @list_t: the list of node to be printed.
 * return: count, else print [0] (nil) if the str is NULL
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
