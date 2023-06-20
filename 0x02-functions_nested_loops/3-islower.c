#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: - Character been checked
 * Return: - 1 if c is lowecase or 0 for else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
		else
		return (0);
}
