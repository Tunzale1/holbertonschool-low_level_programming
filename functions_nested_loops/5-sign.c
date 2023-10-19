#include "main.h"
/**
 * print_sign -  used for check letter, lowercase or uppercase
 * @n: is char
 * Return: 1 + ,  n< 0  0,  n>=, -1 ann zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
