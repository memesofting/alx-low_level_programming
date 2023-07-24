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
	int a;

	if (r < 0)
	{
		a = (r * -1);
		return(a);
	}
	else
		return (r);
}
