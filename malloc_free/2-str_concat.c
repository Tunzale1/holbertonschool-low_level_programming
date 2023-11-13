#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated array (arr),
 * which now holds the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
	{
		length1++;
	}

	while (s2 && s2[length2])
	{
		length2++;
	}
	arr = malloc(sizeof(char) * (length1 + length2 + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; j < length2; j++, i++)
	{
		arr[i] = s2[j];
	}
	arr[i] = '\0';
	return (arr);
}
