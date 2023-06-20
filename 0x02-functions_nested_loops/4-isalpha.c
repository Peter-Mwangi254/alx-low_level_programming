#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c : Character to be checked
 * Return: returns 1 if its an alphabetic character and 0 for anything else
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
