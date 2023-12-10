#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing string 0 and 1
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	size_t number = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		number <<= 1;

		if (*b == '1')
			number |= 1;

		b++;
	}

	return (number);
}
