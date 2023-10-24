#include "main.h"
#include "string.h"
/**
 * rev_string - prints a string, in reverse, followed by a new line
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	int length;
	char c;

	length = strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}
