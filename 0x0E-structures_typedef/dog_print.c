#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: struct object
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
