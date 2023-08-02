#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list
 * @head: Pointer to a pointer to the head node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = NULL;

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
	}
	prev = temp;
	temp = temp->next;
}
prev->next = temp->next;
free(temp);
return (1);
}
