#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a linked list_t list
 * @head: Pointer to a pointer to the first node in the list
 * @str: Pointer to the string to be stored in the new node
 * Return: Pointer to the new node, or NULL if allocation failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->len = strlen(str);
	new_node->next = NULL;

	while (*head != NULL)
	{
		head = &(*head)->next;
	}

	*head = new_node;

	return (new_node);
}
