#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: 0 when program runs successfully
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar (i);
	}
	_putchar('\n');
}

