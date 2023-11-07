#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises variable type struct dog
 * @d: struct object
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
