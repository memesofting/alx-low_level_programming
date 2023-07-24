#include "main.h"
#include <stdlib.h>
/**
 * _abs - prints absolute values
 * @r: number whose absolute value is printed
 *
 * Return: Absolute value of number
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = (r * -1);
		_putchar(r);
	}
	else
		_putchar(r);
	return (r);
}
