#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: points to the first node
 * @index: index of the node to return
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *y = head;

	while (y && x < index)
	{
		y = y->next;
		x++;
	}
	return (y ? y : NULL);
}
