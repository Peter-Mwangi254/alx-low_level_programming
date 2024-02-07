#include "search_algos.h"


/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
int left, mid, right, x;

if (array == NULL || size == 0)
{
return (-1);
}
left = 0;
right = size - 1;

while (left <= right)
{
mid = (left + right) / 2;

printf("Searching in array: ");
for (x = left; x <= right; x++)
printf("%i%s", array[x], x == right ? "\n" : ", ");

if (value == array[mid])
return (mid);
else if (value < array[mid])
right = mid - 1;
else
left = mid + 1;
}
return (-1);
}


