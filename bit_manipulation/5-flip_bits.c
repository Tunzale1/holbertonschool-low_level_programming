#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip_count = 0;

	while (xor)
	{
		flip_count += xor & 1;
		xor >>= 1;
	}

	return (flip_count);
}
