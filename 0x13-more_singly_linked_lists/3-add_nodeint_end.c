#include "lists.h"
/**
 * add_nodeint_end - function that adds node at the end of a list
 * @head: pointer to the first node
 * @n: new data to be inserted
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *start;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (start->next)
	{
		start = start->next;
		start->next = new;
	}
	return (new);
}
