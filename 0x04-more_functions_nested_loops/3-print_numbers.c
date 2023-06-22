#include <stdio.h>

/**
 * print_numbers - print number from 0-9
 * Return: 0 when progra runs successfully
 */

void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');
}

