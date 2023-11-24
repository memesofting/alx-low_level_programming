#include "main.h"

/**
 * flip_bits - returns no of bits to flip
 * to get another number
 * @n: number to be flipped
 * @m: new number
 *
 * Return: no of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
