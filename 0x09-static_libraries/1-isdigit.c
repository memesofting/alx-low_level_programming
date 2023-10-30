#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for digits
 * @c: digit to check
 * Return: Always 1 (Success)
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
