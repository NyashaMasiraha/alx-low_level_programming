#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list, even if it contains a loop
 * @head: Pointer to the head node of the list
 * exit the program with status 98 if it function fails
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t count = 0;

	if (head == NULL)
		return (0);

	node = head;

	while (node != NULL && node > node->next)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		count++;
		node = node->next;
	}

	if (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		count++;
		printf("-> [%p] %d\n", (void *)node->next, node->next->n);
	}

	return (count);
}
