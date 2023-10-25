#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(s[i]);
	_puts_recursion(s + 1);
}
