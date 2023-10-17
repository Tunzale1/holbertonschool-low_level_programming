#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int digit;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
