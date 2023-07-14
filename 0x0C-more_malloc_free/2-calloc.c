#include "main.h"
#include <stdlib.h>

/**
* _memset -fills memory with constant byte
* @s: memory area to be filled
* @b: character to copy
* @n: number of times
* Return: points to the memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

/**
* _calloc - allocates memory for  an array and initiizes it to zero
* @nmemb: number of elements
* @size: sie of the array
* Return: returns pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);

return (ptr);
}
