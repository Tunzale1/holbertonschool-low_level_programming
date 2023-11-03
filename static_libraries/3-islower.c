#include "main.h"

/**
 *_islower - checks lowercase or not
 *@c: the character to check
 *
 *Return: 1 if lowercase ,otherwise  return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
