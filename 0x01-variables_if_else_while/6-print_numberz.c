#include <stdio.h>

/**
 * main - Contains the main function
 *
 * Return: 0 when program runs successfully
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
