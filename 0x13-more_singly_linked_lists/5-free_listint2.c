#include "lists.h"
/**
 * free_listint2 - function that frees list
 * @head: pointer to the linked list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
