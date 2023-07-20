#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - prints anything.
  *@format: list of all arguments passed to the function.
  *
  *Return: nothing
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list pb;
	char *ptr, *separator;

	va_start(pb, format);

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(pb, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(pb, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(pb, double));
				break;
			case 's':
				ptr = va_arg(pb, char *);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s%s", separator, ptr);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(pb);
}
