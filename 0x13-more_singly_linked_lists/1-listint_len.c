#include "lists.h"
/**
 * listint_len -function that returns number of elements
 * @h: pointer to the listint_t
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
