#include <stdio.h>

/**
 * _isupper - confirms uppercase letters
 * @c: character to check
 *
 * Return: 1 if uppercase or 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
