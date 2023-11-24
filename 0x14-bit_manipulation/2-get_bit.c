#include "main.h"

/**
 * get_bit - return bit value at given index
 * @n: number
 * @index: bit index
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
