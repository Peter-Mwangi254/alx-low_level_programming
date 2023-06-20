#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: 0 when program runs successfully
 */

void print_alphabet_x10(void)
{

	int i = 0;
	char c;

	while (i < 10)
	{
	for (c = 97; c <= 122; c++)
	{
		_putchar (c);
	}
	_putchar('\n');
	i++;
	}
}
