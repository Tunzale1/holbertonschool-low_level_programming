#include "main.h"
#include "string.h"
/**
 * puts_half -  print the second half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int length;
	char c;
	int startFromHalf;

	length = strlen(str);
	startFromHalf = length / 2;
	if (length % 2 != 0)
	{
		startFromHalf = length - 1;
	}
	for (i = startFromHalf; i < length; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
}
