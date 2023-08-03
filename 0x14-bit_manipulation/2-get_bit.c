#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to get the bits in
 * @index: The index to get the value at - indices start at 0
 * Return: The value of the bit at index
 *         Or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

if ((n & (1 << index)) == 0)
return (0);
return (1);
}
