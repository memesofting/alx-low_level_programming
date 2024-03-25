#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for digits
 * @c: type that is checked
 *
 * Return: Always 1 (Success)
 * else: 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
