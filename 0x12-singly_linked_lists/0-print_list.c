#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
  * print_list - prints all elements of a list
  *
  * @h: list to print elements of
  * Return: size_t of the list
  */
typedef struct Node
{
	int data;
	struct Node *next;
}Node;
typedef struct List
{
	int size;
	Node *head;
}List;
void initList(list_t *h)
{
       l->head = NULL;
l->size = 0;
}
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
