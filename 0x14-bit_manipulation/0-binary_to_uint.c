#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, num;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		num = b[i] * (2 ** len);
		i++;
		num += num;
		len--;
	}
	return (num);
}
