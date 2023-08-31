#include"main.h"
/**
  *print_binary - prints the integer to binary
  *@n: the integer
  *Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int byte = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int put = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (byte)
	{
		if (n & byte)
		{
			_putchar('1');
			put = 1;
		}
		else if (put)
		{
			_putchar('0');
		}
		byte >>= 1;
	}
}
