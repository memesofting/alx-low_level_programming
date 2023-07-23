#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lower case
 * @c: int type for testing _islower
 *
 * Return: Always 1 on success
 * Else 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
