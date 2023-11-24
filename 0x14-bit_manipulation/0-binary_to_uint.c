#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, num, j, pow;
	int base;

	pow = 1;
	num = 0;
	base = 2;
	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = len - 1; j > 0; j--)
		pow = pow * base;
		num = num + (pow * (b[i] - 48));
		len--;
		pow = 1;
	}
	return (num);
}
