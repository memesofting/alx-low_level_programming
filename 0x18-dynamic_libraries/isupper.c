#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase
 * @c: type that is checked
 *
 * Return: Always 1 (Success)
 * else: 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
