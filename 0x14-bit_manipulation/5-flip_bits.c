#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another
 * @n: The number
 * @m: The numbr to flip n to
 *
 * Return: The number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff, check;
unsigned int count, i;

count = 0;
check = 1;
diff = n ^ m;
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
if (check == (diff & check))
count++;
check <<= 1;
}
return (count);
}
