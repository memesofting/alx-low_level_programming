#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * @s: string to be reversed
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	int i;
	char r;

	i = 0;
	s[i] = s[strlen(s)];
	r = s[strlen(s)] - 1;
	if (s[i] != '\0')
	{
		_putchar(r);
		return;
	}
	_print_rev_recursion(s + 1);
		_putchar('\n');
}
