#include "main.h"
#include "string.h"
/**
 * _strcat - concatenates two strings.
 *@dest: A buffer to copy the string to.
 *@src: The source string to copy.
 *Return: the pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (dest[i++])
	{
		length++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
