#include "main.h"

/**
*print_most_numbers - prints 0-9 excluding 2 and 4
*
*Return: 0 when program runs successfully
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
