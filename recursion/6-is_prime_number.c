#include "main.h"
/**
 * checker - function
 * @num:number
 * @i:the half of num
 * Return: is prime or not
 */

int checker(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (i == 0)
	{
		return (0);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (checker(num, i - 1));
}

/**
 *is_prime_number - func
 *@n: int
 *Return: the value which comes from checker func
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	return (checker(n, n / 2));
}
