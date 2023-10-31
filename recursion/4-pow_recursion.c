#include "main.h"
/**
 * _pow_recursion - function that returns the value of x power of y
 * @x: num
 * @y: power
 * Return: power of number
 */
int _pow_recursion(int x, int y)
{
	if (x == 1)
	{
		return (1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
