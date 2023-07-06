#include "main.h"

/**
* square_root_function - recurses to find the natural square root
* @num: number to calculate the squarere root
* @root: integer
*
* Return: the resulting square root
*/

int square_root_function(int num, int root)

{
if ((root * root) > num)
{
return (-1);
}
else if ((root * root) == num)
{
return (root);
}
else
return (square_root_function(num, root + 1));
}

/**
* _sqrt_recursion - a function that returns the natural square root of a number
* @n: input number
* Return: returns the square root of n as an int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root_function(n, 0));
}

