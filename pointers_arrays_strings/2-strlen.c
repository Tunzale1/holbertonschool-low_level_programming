#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: char
 *Return: length of array
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
