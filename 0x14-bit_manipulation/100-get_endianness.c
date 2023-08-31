#include "main.h"

/**
 * get_endianness - checks for endiainness.
 * Return: 0(big endian) or 1 (little endian)
 */

int get_endianness(void)
{
	int i;

	char *c;

	i = 1;

	c = (char *)&i;

	return (*c);
}
