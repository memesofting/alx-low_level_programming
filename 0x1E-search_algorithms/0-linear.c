#include "search_algos.h"

/**
 * linear_search - searches a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element to the array to be searched
 * @size: number of elements int the array
 * @value: value to search for
 * Return: first index which value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
