#include "main.h"
/**
* _puts_recursion - prints a string
* @s: the string to be printed
* Return: returns 0
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar (*s);
_puts_recursion(s + 1);
}
