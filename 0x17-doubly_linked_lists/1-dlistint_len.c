#include "lists.h"
/**
 * dlistint_len - checks for nodes present in the list
 * @h: the pointer to the linked list
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *newnode;
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	newnode = malloc(sizeof(dlistint_t));

	newnode->n = h->n;
	newnode->prev = h->prev;
	newnode->next = h->next;

	while (newnode != NULL)
	{
		count++;
		newnode = newnode->next;
	}
	return (count);
}
