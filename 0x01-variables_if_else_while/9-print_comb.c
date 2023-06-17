#include <stdio.h>

/**
 * main - Contains the main function
 *
 * Return: 0 when program runs successfully
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
{
	putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
	++i;
}
	putchar('\n');
	return (0);
}
