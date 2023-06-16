#include <stdio.h>

/**
 * main - Contains the main function
 *
 * Return: 0 when program runs successfully
 */

int main(void)
{
int lowercase = 'a';
int uppercase = 'A';
while (lowercase <= 'z')
{
	putchar(lowercase);
	lowercase += 1;
}
while (uppercase <= 'z')
{
	putchar(uppercase);
	uppercase += 1;
}
putchar('\n');
return (0);
}
