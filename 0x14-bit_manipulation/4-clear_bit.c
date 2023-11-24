#include "main.h"

/**
 * clear_bit - sets bit value to 0 at a given index
 * @n: pointer to number
 * @index: index to set bit
 *
 * Return: 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8 || n  == NULL)
		return (-1);
	mask = 1;
	mask = mask << index;
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;
	return (1);
}
