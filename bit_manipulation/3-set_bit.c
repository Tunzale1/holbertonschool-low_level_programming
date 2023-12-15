#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1.
 * @n: Pointer to the number to change.
 * @index: The index of the bit.
 *
 * Return: 1 if it worked, or -1.
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
