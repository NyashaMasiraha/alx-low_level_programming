#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list
 * @head: Pointer to a pointer to the head node
 * @index: Index of the node to be deleted
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (current)->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		if (temp == NULL)
			return (-1);
	}
	current = temp;
	temp = temp->next;
	temp->next = temp->next;
	free(temp);
	return (1);
}
