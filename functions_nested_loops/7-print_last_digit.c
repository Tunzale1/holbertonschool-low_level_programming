#include "main.h"
/**
 * print_last_digit -  used for check letter, lowercase or uppercase
 * @c: is int
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
	int digit = c % 10;
		if (digit < 0)
		{
			digit = -digit;
		}
	_putchar(digit + '0');
	return (digit);
}
