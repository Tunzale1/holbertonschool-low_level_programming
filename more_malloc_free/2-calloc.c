#include "main.h"
#include <stdlib.h>
/**
 * _calloc - that allocates memory for an array, using malloc
 * @nmemb: elememnt
 * @size: bytes
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		arr[i] = 0;
	return (arr);
}
