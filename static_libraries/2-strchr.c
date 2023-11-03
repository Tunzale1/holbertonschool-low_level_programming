#include "main.h"
/**
 * _strchr -  a function that locates a character in a string.
 * @s: string
 * @c:occurrence of the character
 * Return: a pointer to the first occurrence of the character c in the strinf s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
