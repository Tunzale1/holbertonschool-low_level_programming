#include "main.h"

/**
 *_isalpha -  used for check letter, lowercase or uppercase
 * @c: is char
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
