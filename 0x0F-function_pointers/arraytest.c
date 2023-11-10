#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes a functiom
 *
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	array = malloc(sizeof(size_t) * size);
	if (array == NULL)
	{
		return;
	}
	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
