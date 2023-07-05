#include "main.h"

/**
* _print_rev_recursion - a function that prints a string in reverse
* @s: the string to be printed
* Return: returns nothing
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar (*s);
_puts_recursion((s + 1));
}
