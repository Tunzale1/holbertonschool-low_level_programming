#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		puts("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		puts("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		puts("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
