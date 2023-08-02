#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @n: integer data to store in the new node
 * @head: double pointer to head node
 * Return: address of new node, else NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
	temp = temp->next;

	temp->next = new_node;

	return (new_node);

}
