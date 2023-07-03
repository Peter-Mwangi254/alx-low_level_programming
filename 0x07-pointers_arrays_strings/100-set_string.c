#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer that points to a pointer that points to a char 
 *@to: a pointer that points to a character
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
