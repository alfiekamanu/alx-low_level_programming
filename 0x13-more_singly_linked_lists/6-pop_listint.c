#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: pointer to the first element in the linked list
 * Return: 0 when linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (!head || !*head)
	{
		return (0);
	}
	y = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;
	return (y);
}
