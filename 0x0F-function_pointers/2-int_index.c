#include "function_pointers.h"

/**
* int_index- searches for an integer
* @array: array to be searched
* @cmp: pointer to the comparing function
* Return: returns the index of the first element for which cmp is successful
* and -1 if there is no match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
} 
