#include "main.h"

/**
 * set_bit - sets bit value to 1 at a given index
 * @n: pointer to number
 * @index: index to set bit
 *
 * Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
