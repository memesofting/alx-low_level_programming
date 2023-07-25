#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first integer to b swaped
 * @b: second integer to be swaped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
