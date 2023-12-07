#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - fun
 * @name: name
 * @age: age
 * @owner: chra
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my;
	char *new_name, *new_owner;

	my = malloc(sizeof(dog_t));
	if (my == NULL)
	{
		return (NULL);
	}

	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_name == NULL)
	{
		free(my);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_owner == NULL)
	{
		free(new_name);
		free(my);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);
	my->name = new_name;
	my->age = age;
	my->owner = new_owner;
	return (my);
}
