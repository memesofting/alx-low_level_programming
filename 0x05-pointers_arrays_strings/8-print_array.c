#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i, len;

	len = strlen(a);
	if (n > len)
		return;
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n -1))
				printf("%c",a[i]);
			else
				printf("%c, ", a[i]);
		}
	}
	printf("\n");
}
