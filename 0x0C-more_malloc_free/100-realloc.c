#include "main.h"
#include <stdlib.h>

/**
*_realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previsouly allocated by malloc
* @old_size: size of the allocated memory for ptr
* @new_size: new size of the new memory block
* Return: pointer to the newly allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *arr;
	char *pptr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (pptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (pptr != NULL && new_size == 0)
	{
		free(pptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		arr = malloc(new_size);

		for (i = 0; i < new_size; i++)
		{
			arr[i] = pptr[i];
		}
		free(pptr);
		return (arr);
	}
	if (new_size > old_size)
	{
		arr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			arr[i] = pptr[i];
		}
		free(pptr);
		return (arr);
	}
	return (pptr);
}
