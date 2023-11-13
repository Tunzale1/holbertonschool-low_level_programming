#include "main.h"
#include <stdlib.h>
/**
 * _strdup - contains a copy of the string given as a parameter.
 * @str: string
 * Return:  a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	arr = malloc(sizeof(char) * length);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
