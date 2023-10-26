#include "main.h"
/**
 *_strncat - concatenates two strings.;use at most n bytes from src
 *@dest: destination
 *@src: source
 *@n: integer
 *Return:  resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (dest[i++])
	{
		length++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
