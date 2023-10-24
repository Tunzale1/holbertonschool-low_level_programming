#include "main.h"
/**
 *_strcpy - Copies a string from @src, including the null byte to @dest
 *@dest: A buffer to copy the string to.
 *@src: The source string to copy.
 *Return: the pointer to dest
**/
char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
