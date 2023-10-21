#include "main.h"

/**
*print_diagonal - draws a straight line in the terminal
* @n: integr
*Return: returns nothing
*/

void print_diagonal(int n)
{
        int i;
	int j;

        if (n >= 0)
        {
		for (j = 0; j < n; j++)
		{
        for (i = 0; i < j; i++)
        {
		_putchar(' ');
        }
	_putchar(92);
	_putchar('\n');
        }
	}
        else
        {
                _putchar('\n');
        }
}

