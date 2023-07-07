#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s:string to be tested
 * @accept: the string to find
 * Return: returns number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	unsigned int z = 0;

	for (x = 0; s[x] != 0; x++)
	{
		if (s[x] == ' ')
			break;
		for (y = 0; accept[y] != 0; y++)
		{
			if (s[x] == accept[y])
				z++;
		}
	}
	return (z);
}
