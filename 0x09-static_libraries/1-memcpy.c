#include "main.h"

/**
* _memcpy - a function that copies a memory area
* @dest: pointer to destination string
* @src: pointer to source string
* @n: number of bytes from memory area of source to destination
* Return: returns nothing
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
