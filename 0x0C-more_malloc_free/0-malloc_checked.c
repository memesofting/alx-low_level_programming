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
	void *location;

	location = malloc(b);
	if ( location == NULL)
	{
		exit(98);
	}
	else
	{
		return (location);
	}
}
