#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks for memory allocation
 * @b: variable to allocate memory to
 *
 * Return: void on success
 * else: 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *location;

	location = &b;
	while (location)
	{
		location = malloc(sizeof(unsigned int));
		return (location);
	}
	return (location);
}
