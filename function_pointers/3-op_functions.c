#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - sum funct
 * @a: num1
 * @b: num2
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference
 * @a: num1
 * @b: num2
 * Return: differnece of numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - prod
 * @a: num1
 * @b: num2
 * Return: product of 2 numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: num1
 * @b: num2
 * Return: division of 2 numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder
 * @a: num1
 * @b: num2
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
