#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: order1
 * @max: order2
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (min > max)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
