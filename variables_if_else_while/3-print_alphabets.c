#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alphabet = 'a';
	char alp = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alp <= 'Z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
