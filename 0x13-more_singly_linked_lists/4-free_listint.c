#include "lists.h"
#include <stdio.h>

/**
 * free-listint - a function that free the memory occupied by listint_t
 * @head: pointer to the head nnode of listint_t
 *
 * Returns: NULL
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(head);
		current = temp;
	}
}
