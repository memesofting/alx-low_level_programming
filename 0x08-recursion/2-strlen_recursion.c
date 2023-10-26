#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string which lenght will be printed
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int len, i;

	len = 0;
	i = 0;
	if (s[i] == '\0')
	{
		len = i;
		printf("%d\n", len);
		return (0);
	}
	else
		i = i + 1;
	_strlen_recursion(s + 1);
	return (0);
}
