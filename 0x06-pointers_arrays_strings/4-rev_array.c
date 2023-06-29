#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
int *alpha, *omega, temp;
int i;


alpha = a;
omega = a;


for (i = 0; i < n - 1; i++)
{
omega++;
}




for (i = 0; i < n / 2; i++)
{


temp = *omega;
*omega = *alpha;
*alpha = temp;

alpha++;
omega--;
}

}
