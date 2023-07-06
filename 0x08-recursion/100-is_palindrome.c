#include "main.h"

/**
*length- recursion
*@str: pointer to string parameter
*Return: Recursion length
*/

int length(char *str)
{
if (*str == '\0')
{
return (0);
}
else
{
return (1 + length(str + 1));
}
}

/**
*find_palindrome- palindrome
*@str: pointer to string
*@start: integer that shows beginning of string
*@end: integer that shows end of the string
*Return: recursion
*/

int find_palindrome(char *str, int start, int end)
{
if (start >= end)
{
return (1);
}
else if (str[start] == str[end])
{
return (find_palindrome(str, start + 1, end - 1));
}
else
{
return (0);
}
}

/**
*is_palindrome- palindrome
*@str: pointer to string
*Return: returns recursion
*/

int is_palindrome(char *str)
{
int len = length(str);
return (find_palindrome(str, 0, len - 1));
}
