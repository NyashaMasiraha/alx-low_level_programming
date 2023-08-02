#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: double pointer to the head node of the list
 * @n: address of the new node
 * Description: a function that add a new node at the begining of the list
 * and returns the address of the ne element or NULL if it failed
 * Returns: address of the new node on success, else return NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;


	return (new_node);
}
