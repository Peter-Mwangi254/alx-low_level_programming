#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to be tested
 * @needle: the substring to be searched for
 * Return: returns a pointer to the beginning of the
 * located substring, or 0 if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, z;

	for (i = 0; haystack[i] != 0; i++)
	{
		z = i;
		for (j = 0; needle[j] != 0; )
		{
			if (haystack[z++] == needle[j++])
			{
				continue;
			}
			break;
		}
		if (needle[j] == '\0')
			return ((haystack + i));
	}
	return (0);
}
