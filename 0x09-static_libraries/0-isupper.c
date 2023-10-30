#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - entry point
 * @c: character to be checked
 *
 * Return: Always 1 (Success)
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
