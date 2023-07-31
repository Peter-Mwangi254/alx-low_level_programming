#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to a linked list
 * Return: 0 when successful
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
