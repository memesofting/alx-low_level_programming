#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using Jump search array
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where the value is found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, start, end;

	jump = sqrt(size);
	start = 0;
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (start < size && array[start] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", start, array[start]);
		start += jump;
	}
	end = start;
	start = start > jump ? start - jump : 0;

	if (end > size - 1)
	{
		end = size;
	}
	printf("Value found between indexes [%lu] = [%lu]\n", start, end);
	for (i = start; i < end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
