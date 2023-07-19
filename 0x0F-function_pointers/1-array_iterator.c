#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator- executes function given as a parameter
* on each element of an array
* @array: array to iterate on
* @size: size of the array
* @action:the action to be performed on each array element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
