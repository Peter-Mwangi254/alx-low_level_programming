#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	size_t n;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	add->len = n;
	add->next = *head;
	*head = add;

	return (*head);
}
