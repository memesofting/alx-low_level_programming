#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for upper case
 * @c: letter to be checked
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
