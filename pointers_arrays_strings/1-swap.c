#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: integgr
 * @b: integr
 * Return: 0 succes
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
