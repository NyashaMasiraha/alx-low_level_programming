#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a list
 * @h: pointer to the header node of listint_t
 * Description: a function that prints all the elements of a listint_t list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
