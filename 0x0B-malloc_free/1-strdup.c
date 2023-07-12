#include "main.h"
#include <stdlib.h>

/**
* _strdup - a function that copies a string
* @str: the string to  be copied
* Return: returns a pointer to a newly allocated space in memonry
*/

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; ; i++)
	{
		c++;
		if (str[i] == '\0')
			break;
	}

	p = (char *) malloc(c * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
