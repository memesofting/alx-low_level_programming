#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to be searched for
 *
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;
	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		print_sub_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}


/**
 * print_sub_array - prints the current array being searched
 * @array: pointer to the first element of the array to search
 * @left: left bound of the subarray
 * @right: right bound of the subarray
 */

void print_sub_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
		{
			printf("%i, ", array[i]);
		}
		else
		{
			printf("%i\n", array[i]);
		}
	}
}
