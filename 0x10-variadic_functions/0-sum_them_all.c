#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all of its paraneters
* @n: number of arguments
* Return: returns an int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list pb;
	int sum = 0;
	unsigned int i;

	va_start(pb, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(pb, int);
	}
	va_end(pb);

	return (sum);
}
