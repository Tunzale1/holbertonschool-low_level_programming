#include "main.h"

/**
*more_numbers - 10 times the numbers, from 0 to 14, followed by a new line.
*
*Return: returns nothing
*/

void more_numbers(void)
{
	int num;
	int col;

	for (col = 0; col <= 9; col++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
			_putchar((num / 10) + '0');
		}
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
	}
}
