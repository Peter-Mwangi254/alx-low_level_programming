#include "hash_tables.h"
/**
 * key_index - finds the key index in a hash table
 * @key: the key
 * @size: the size of the array
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, res;

	res = hash_djb2(key);

	index = res % size;

	return (index);
}
