#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 * @a - inetegr
 * Return: succesfyl 0
 */

void print_most_numbers(void)
{
	int a = 0;


	for (; a <= 9; a++)
	{
		if (a != 2 &&  a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}

