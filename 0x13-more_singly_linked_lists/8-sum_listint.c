#include "lists.h"
/**
 * sum_listint - function that returns sum of all data
 * @head: pointer to the first node in the linked list
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x = head;

	while (x)
	{
		sum += x->n;
		x = x->next;
	}
	return (sum);
}
