#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for letters
 * @c: int type to test _isalpha
 *
 * Return: Always 1 on Success
 * Else: 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
