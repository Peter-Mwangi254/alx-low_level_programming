#include "hash_tables.h"
/**
 * hash_table_set - sets a value to the hash_key
 * @ht: the pointer hash table
 * @key: the key
 * @value: the value to insert at a given key
 * Return: 1(success) or 0(failed)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;
	hash_node_t *current;

	if (!ht || !key || !value || strcmp(value, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	newnode  = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);

	if (!newnode->key || !newnode->value)
	{
		free(newnode->key);
		free(newnode->value);
		free(newnode);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
