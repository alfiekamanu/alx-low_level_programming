#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts a node at a given position
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data that will be inserted in the new node
 * Return: he address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *y = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (x = 0; y && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = y->next;
			y->next = new;
			return (new);
		}
		else
			y = y->next;
	}
	return (NULL);
}
