#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: pointer
 * @f:funct
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
