#include "main.h"

int sqrt_function(int num, int root)

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
return (sqrt_function(num , root + 1));
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
	else
	return (sqrt_function(n, 0));
}

