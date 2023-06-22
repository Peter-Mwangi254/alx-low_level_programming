#include <stdio.h>

/**
 * print_numbers - print number from 0-9
 * Return: 0 when progra runs successfully
 */

void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i);

putchar('\n');
}
}
