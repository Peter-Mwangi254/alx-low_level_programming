#include "main.h"
#include <stdlib.h>

/**
* create_array - create an array of characters
* and initializes with specified char
* @size: size of the array
* @c: char to assign
* Return: pointer to array and NULL if size is 0
*/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
