#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 * Return: 0 when program runs successfully
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
