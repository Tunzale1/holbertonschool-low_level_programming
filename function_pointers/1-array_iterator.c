#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - func
 * @array: array
 * @size: size of array
 * @action: func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
