#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars then initializes with specific char
 * @size: size of size of arr
 * @c: spesific char
 * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
