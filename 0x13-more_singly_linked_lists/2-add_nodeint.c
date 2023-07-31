#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: constant to put the new node
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
