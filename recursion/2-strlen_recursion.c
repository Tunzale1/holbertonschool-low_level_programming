#include "main.h"
/**
 * _strlen_recursion - func
 * @s: stringi
 * Return: length of string using recursion
 */
int _strlen_recursion(char *s)
{
	if(*s == '\0')
	{
		return 0;
		_putchar('\n');
	}
	return _strlen_recursion(s + 1) + 1;
}
