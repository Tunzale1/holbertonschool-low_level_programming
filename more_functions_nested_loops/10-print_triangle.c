#include "main.h"

/**
*print_triangle -  square, followed by a new line.
* @size: integr
*Return: returns nothing
*/
void print_triangle(int size)
{
	int i;
	int j;


	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				if (i < size - j - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
