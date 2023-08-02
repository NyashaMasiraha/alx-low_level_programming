#include "lists.h"

/**
 * sum_listint - sums all the data of listint_t linked list
 * @head: first node in the linked list
 *
 * Return: sum, else 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

