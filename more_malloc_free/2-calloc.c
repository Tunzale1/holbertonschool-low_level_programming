#include "main.h"
#include <stdlib.h>
/**
 * _calloc - that allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: bytes, size of elem
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	fill = arr;
	for (i = 0; i < (size * nmemb); i++)
		fill[i] = 0;
	return (arr);
}
