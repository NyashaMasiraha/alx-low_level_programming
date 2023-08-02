#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: pointer to the pointer to head node
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (*head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

return (*head);
}


