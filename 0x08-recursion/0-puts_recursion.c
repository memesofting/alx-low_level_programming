#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 *
 * Return: void (Success)
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
	_putchar('\n');
	return;
}
