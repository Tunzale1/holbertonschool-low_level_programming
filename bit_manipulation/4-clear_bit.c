#include "main.h"

/**
 * clear_bit - Sets the value of a bit 0
 * @n: A pointer to the bit.
 * @index: The index to set the value
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
