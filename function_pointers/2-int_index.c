#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - func that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: is a pointer to the function used to compare values.
 * Return: index of the 1st element for which the cmp function doesnt return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
