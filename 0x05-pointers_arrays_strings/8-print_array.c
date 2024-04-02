#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
