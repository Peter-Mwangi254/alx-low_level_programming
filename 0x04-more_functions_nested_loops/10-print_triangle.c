#include "main.h"

/**
 * print_triangle - Draws a triangle
 *
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return:0 when progran runs successfully
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (z = size - x; z >= 1; z--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
