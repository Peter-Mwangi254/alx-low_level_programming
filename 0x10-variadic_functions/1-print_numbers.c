#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - a function that prints numbers
* @separator: separator between the numbers
* @n: the number of arguments
* Return: returns nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pb;
	unsigned int i;

	va_start(pb, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(pb, int));
			break;
		}
		if (separator == NULL)
			printf("%d", va_arg(pb, int));
		else
			printf("%d%s", va_arg(pb, int), separator);
	}
	va_end(pb);
	printf("\n");
}
