#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *new_d;

	name_len = strlen(name);
	owner_len = strlen(owner);
	new_d = malloc((sizeof(char) * name_len) +
			sizeof(float) + (sizeof(char) * owner_len));
	if (new_d == NULL)
	{
		return (NULL);
	}
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;
	return (new_d);
}
