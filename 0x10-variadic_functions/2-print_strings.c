#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - a function that prints strings,followed by a new line
* @separator: the string to be printed between strings
* @n: the number of strings passed to the function
* Return: returns nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pb;
	char *ptr;

	va_start(pb, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(pb, char *);
		if (ptr != NULL)
		{
			if (i == (n - 1))
			{
				printf("%s", ptr);
				break;
			}
			if (separator == NULL)
				printf("%s", ptr);
			else
				printf("%s%s", ptr, separator);
		}
		else if (ptr == NULL)
		{
			if (i == (n - 1))
			{
				printf("(nil)");
				break;
			}
			if (separator == NULL)
				printf("(nil)");
			else
				printf("(nil)%s", separator);
		}
	}
	va_end(pb);
	printf("\n");
}
