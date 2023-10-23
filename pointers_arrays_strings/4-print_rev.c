#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* using for find length of dtring and find last character*/
	while (*s != '\0')
	{
		length++;
		++s;
	}
	/* using for go back to null charcater*/
	s--;
	/* using for print reverse*/
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
