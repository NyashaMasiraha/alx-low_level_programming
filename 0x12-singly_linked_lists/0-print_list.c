#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all elements of a singly liked list
 * @h: pointer to the singly linked list
 * return: count, else print [0] (nil) if the str is NULL
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
