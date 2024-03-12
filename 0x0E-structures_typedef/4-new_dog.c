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
	/*allocate dog_t memory*/
	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		return (NULL);
	}
	/**
	 * allocate memory for stings in struct
	 * and mak copy
	 */
	new_d->name = malloc((sizeof(char) * name_len) + 1);
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	strcpy(new_d->name, name);

	new_d->owner = malloc((sizeof(char) * owner_len) + 1);
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	strcpy(new_d->owner, owner);

	new_d->age = age;

	return (new_d);
}
