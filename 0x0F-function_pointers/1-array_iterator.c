#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes a functiom
 * @size: size of array
 * @array: array of integers
 * @action: pointer to function that prints integers
 *
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (action != NULL && array != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
