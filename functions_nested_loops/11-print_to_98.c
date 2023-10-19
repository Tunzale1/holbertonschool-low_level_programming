#include "main.h"
#include<stdio.h>
/**
 *print_to_98 -  used for check letter, lowercase or uppercase
 * @n: is integer
 * @i is integer
 * Return:  all natural numbers from n to 98, followed by a new line
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
	for (i = n; i <= 98; i++)
	{
		if (i > n)
		{
			printf(", ");
		}
		printf("%d", i);
	}
	for (i = n; i >= 98; i--)
	{
		if (i < n)
		{
			printf(", ");
		}
		printf("%d", i);
	}
	}

	printf("\n");
}
