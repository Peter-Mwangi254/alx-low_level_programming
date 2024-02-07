#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
size_t i, start, end;

if (!array || size == 0)
return (-1);
start = 0;

end = sqrt(size);

while (array[end] < value && end < size)
{
printf("Value checked array[%lu] = [%d]\n", end, array[end]);
start = end;
end = end + sqrt(size);
if (end > size - 1)
{
end = size - 1;
}
}
printf("Value found between indexes [%lu] and [%lu]\n", start, end);
for (i = start; i <= end; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
