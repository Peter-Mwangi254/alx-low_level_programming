#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at specified index
 * @head: pointer to the list
 * @index: the specified position
 * Return: node at specified position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*dlistint_t *temp;*/
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		count++;
		if (index == count - 1)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
