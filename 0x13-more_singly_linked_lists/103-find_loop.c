#include "lists.h"

/**
 * find_listint_loop - finds the start of a loop in a linked list
 * @head: pointer to the head node
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);

	while (fast != NULL && fast->next != NULL)
	
		if (fast == slow)
		{
			fast = head;
			while (fast != slow)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
		slow = slow->next;
		fast = fast->next->next;
}


